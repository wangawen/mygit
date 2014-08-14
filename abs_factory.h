#ifndef _ABS_FACTORY_H_
#define _ABS_FACTORY_H_

#include "abs_product_a.h"
#include "abs_product_b.h"

class AbsFactory
{
public:
	AbsFactory () {}
	virtual ~AbsFactory () {}
	
	virtual AbsPdtA * CreatProductA () = 0;
	virtual AbsPdtB * CreatProductB () = 0;
};

#endif
