#ifndef FEncrypt_H
#define FEncrypt_H

#include "IFilter.h"

class FEncrypt : public IFilter {
public:
	FEncrypt();
	~FEncrypt();
	string setFilter(string);
};

#endif