#if !defined(FILTER_MGR_H)
#define FILTER_MGR_H

#include <string>

class IFactory;

using namespace std;

class FilterMgr
{
public:
	FilterMgr();
	string getChoices();
	IFactory* selectFilter(string);
	~FilterMgr();
};

#endif