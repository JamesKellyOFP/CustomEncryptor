#include "FUpperCase.h"

using namespace std;

FUpperCase::FUpperCase()
{
}

FUpperCase::~FUpperCase()
{
}

string
FUpperCase::setFilter(string s)
{
	for (unsigned i = 0; i < s.size(); i++)
		s.replace(i, 1, 1, toupper(s[i]));
	return s;
}