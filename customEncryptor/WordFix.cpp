#include <string>
#include <iostream>

#include "FilterMgr.h"
#include "InteractiveFix.h"
#include "FileFix.h"

using namespace std;

int main(int argc, char* argv[])
{
	IFactory* factory;
	while (true)
	{
		cout << "Enter your choice of the following filters. (q to quit)" << endl;
		FilterMgr* mgr = new FilterMgr();
		cout << mgr->getChoices() << endl;

		string str;
		cin >> str;
		if (str == "q")
		{
			return 0;
		}

		factory = mgr->selectFilter(str);
		if (factory == NULL) 
		{
			cout << "Sorry that's not a valid choice. Please try again." << endl;
		}
		else
		{
			break;
		}
	}
	while (true)
	{
		cout << "Enter i for an interactive fix or f to fix an an entire file. (q to quit)" << endl;

		char car;
		cin >> car;
		if (car == 'q')
		{
			return 0;
		}
		else if (car == 'i')
		{
			InteractiveFix* fix = new InteractiveFix(factory);
			fix->DoInteractiveSession();
		}
		else if (car == 'f')
		{
			cout << "please enter a filename (q to quit):" << endl;

			string file;
			cin >> file;
			if (file == "q")
			{
				return 0;
			}
			FileFix* felix = new FileFix(factory);
			felix->ConvertFile(file);
		}
		else
		{
			cout << "Sorry that's not a valid choice. Please try again." << endl;
		}
	}
	system("pause");
	return 0;
}

