// IFilter.h: interface for the FilterMgr class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(IFILTER_H)
#define IFILTER_H

#include <string>

using namespace std;

class IFilter {
public:
	virtual string setFilter(string) = 0;
	virtual ~IFilter() {}
};

#endif 
