#include "LCaseFactory.h"
#include "FLowerCase.h"

LCaseFactory::LCaseFactory()
{
}
LCaseFactory::~LCaseFactory()
{
}
IFilter*
LCaseFactory::NewFilter()
{
	return new FLowerCase();
}
