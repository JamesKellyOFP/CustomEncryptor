#include "EncryptFactory.h"
#include "FEncrypt.h"

EncryptFactory::EncryptFactory() 
{
}
EncryptFactory::~EncryptFactory()
{
}
IFilter*
EncryptFactory::NewFilter() 
{
	return new FEncrypt();
}
