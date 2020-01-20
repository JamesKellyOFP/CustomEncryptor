#if !defined(L_CASE_FACTORY_H)
#define L_CASE_FACTORY_H

#include "IFactory.h"

using namespace std;

class LCaseFactory : public IFactory
{
public:
	LCaseFactory();
	IFilter* NewFilter();
	~LCaseFactory();
};

#endif 