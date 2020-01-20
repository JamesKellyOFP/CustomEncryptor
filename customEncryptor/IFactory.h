//					Factory Interface
//////////////////////////////////////////////////////////////////////

#if !defined(IFACTORY_H)
#define IFACTORY_H

class IFilter;

using namespace std;

class IFactory {
public:
	virtual IFilter* NewFilter() = 0;
	virtual ~IFactory() {}
};

#endif 