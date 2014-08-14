#ifndef _PRODUCT_B_H_
#define _PRODUCT_B_H_

#include <iostream>
#include "abs_product_b.h"

using namespace std;

class PdtB1 : public AbsPdtB
{
public:
	PdtB1() { cout << ">>> Product B 1 . CONSTRUCT <<<" << endl; }
	~PdtB1() { cout << ">>> Product B 1 . DESTRUCT <<<" << endl; }
	virtual void Func () 
	{
		cout << ">>> Product B 1 . FUNCTION <<<" << endl;
	}
};

class PdtB2 : public AbsPdtB
{
public:
	PdtB2() { cout << ">>> Product B 2 . CONSTRUCT <<<" << endl; }
	~PdtB2() { cout << ">>> Product B 2 . DESTRUCT <<<" << endl; }
	virtual void Func () 
	{
		cout << ">>> Product B 2 . FUNCTION <<<" << endl;
	}
};

#endif
