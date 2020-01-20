
#if !defined(F_Lower_Case_H)
#define F_Lower_Case_H

#include "IFilter.h"

class FLowerCase : public IFilter
{
public:
	FLowerCase();
	string setFilter(string);
	~FLowerCase();
};

#endif
