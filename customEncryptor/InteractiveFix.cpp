#include "InteractiveFix.h"
#include <iostream>

using namespace std;

InteractiveFix::InteractiveFix(IFactory* maker)
{
	myFilter = maker->NewFilter();
}

InteractiveFix::~InteractiveFix()
{
}

void 
InteractiveFix::DoInteractiveSession() 
{
	while (true)
	{
		cout << "Enter a word (q to quit):\n";
		string word;
		cin >> word;
		if (word == "q")
		{
			return;
		}
		cout << "Filtered word is: " << myFilter->setFilter(word) << endl << endl;
	}
}
