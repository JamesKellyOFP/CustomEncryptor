#if !defined(INTERACTIVE_FIX_H)
#define INTERACTIVE_FIX_H

#include "IFactory.h"
#include "IFilter.h"

class InteractiveFix {
public:
	InteractiveFix(IFactory*);
	void DoInteractiveSession();
	~InteractiveFix();

private:
	IFilter* myFilter;
};

#endif