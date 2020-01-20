#include "UCaseFactory.h"
#include "FUpperCase.h"

UCaseFactory::UCaseFactory()
{
}
UCaseFactory::~UCaseFactory()
{
}
IFilter*
UCaseFactory::NewFilter()
{
	return new FUpperCase();
}
