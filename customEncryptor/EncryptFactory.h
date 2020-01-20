#if !defined(ENCRYPT_FACTORY_H)
#define ENCRYPT_FACTORY_H

#include "IFactory.h"

using namespace std;

class EncryptFactory : public IFactory 
{
public:
	EncryptFactory();
	IFilter* NewFilter();
	~EncryptFactory();
};

#endif 