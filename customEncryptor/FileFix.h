#if !defined(FILE_FIX_H)
#define FILE_FIX_H

#include "IFactory.h"
#include "IFilter.h"

using namespace std;

class FileFix {
public:
	FileFix(IFactory*);
	bool exists(string);
	void ConvertFile(string);
	~FileFix();

private:
	IFactory* myFactory;
};

#endif