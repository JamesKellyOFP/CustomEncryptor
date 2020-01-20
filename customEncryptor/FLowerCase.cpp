#include <iostream>
#include <string>
#include "FLowerCase.h"
#include "FEncrypt.h"

using namespace std;

FLowerCase::FLowerCase()
{
}

FLowerCase::~FLowerCase()
{
}

string
FLowerCase::setFilter(string s)
{
	for (unsigned i = 0; i < s.size(); i++) {
		s.replace(i, 1, 1, tolower(s[i]));
	}
	return s;
}
