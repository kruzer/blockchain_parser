#include "MemoryMap.h"
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>


class MemoryMapImpl :public MemoryMap
{
public:
	MemoryMapImpl(const char *mappingObject,uint64_t size,bool createOk)
	{
		mData = NULL;
		mData = malloc(size);
	}

	~MemoryMapImpl(void)
	{
		free(mData);
	}

	virtual void *getBaseAddress(void) 
	{
		return mData;
	}

	virtual void release(void) 
	{
		delete this;
	}

	uint64_t	mMapSize;
	void	*mData;
};


MemoryMap * createMemoryMap(const char *fileName,uint64_t size,bool createOk)
{
	MemoryMapImpl *m = new MemoryMapImpl(fileName,size,createOk);
	if ( m->getBaseAddress() == NULL )
	{
		m->release();
		m = NULL;
	}
	return static_cast< MemoryMap *>(m);
}
