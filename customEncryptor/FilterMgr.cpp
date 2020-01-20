#include "FilterMgr.h"
#include <string>
#include <iostream>
#include "UCaseFactory.h"
#include "EncryptFactory.h"
#include "LCaseFactory.h"

using namespace std;

FilterMgr::FilterMgr()
{
}

FilterMgr::~FilterMgr()
{
}

string
FilterMgr::getChoices()
{
	string choices = "\tuppercase\n\tlowercase\n\tencrypt";
	return choices;
}


IFactory*
FilterMgr::selectFilter(string whichFilter)
{
	if (whichFilter == "uppercase")
	{
		IFactory *factory = new UCaseFactory();
		return factory;
	}
	else if (whichFilter == "lowercase")
	{
		IFactory *factory = new LCaseFactory();
		return factory;
	}
	else if (whichFilter == "encrypt")
	{
		IFactory *factory = new EncryptFactory();
		return factory;
	}
	else
	{
		return NULL;
	}
}
