#if !defined(U_CASE_FACTORY_H)
#define U_CASE_FACTORY_H

#include "IFactory.h"

using namespace std;

class UCaseFactory : public IFactory
{
public:
	UCaseFactory();
	IFilter* NewFilter();
	~UCaseFactory();
};

#endif 