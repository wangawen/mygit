#ifndef _PRODUCT_A_H_
#define _PRODUCT_A_H_

#include <iostream>
#include "abs_product_a.h"

using namespace std;

class PdtA1 : public AbsPdtA
{
public:
	PdtA1() { cout << ">>> Product A 1 . CONSTRUCT <<<" << endl; }
	~PdtA1() { cout << ">>> Product A 1 . DESTRUCT  <<<" << endl; }
	virtual void Func () 
	{
		cout << ">>> Product A 1 . FUNCTION <<<" << endl;
	}
};

class PdtA2 : public AbsPdtA
{
public:
	PdtA2() { cout << ">>> Product A 2 . CONSTRUCT <<<" << endl; }
	~PdtA2() { cout << ">>> Product A 2 . DESTRUCT <<<" << endl; }
	virtual void Func () 
	{
		cout << ">>> Product A 2 . FUNCTION <<<" << endl;
	}
};

#endif
