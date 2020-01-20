#if !defined(FUPPERCASE_H)
#define FUPPERCASE_H

#include "IFilter.h"
class FUpperCase : public IFilter
{
public:
	FUpperCase();
	string setFilter(string);
	~FUpperCase();
};
#endif