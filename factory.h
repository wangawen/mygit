#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "abs_factory.h"
#include "product_a.h"
#include "product_b.h"

class Factory1 : public AbsFactory
{
public:
	
	static Factory1 & Instance ()
	{
		static Factory1 obj;
		return obj;
	}

	AbsPdtA * CreatProductA () 
	{
		return new PdtA1;
	}
	AbsPdtB * CreatProductB ()
	{
		return new PdtB1;
	}
	
protected:
	Factory1 () { cout << ">>> Factory 1 . CONSTRUCT <<<" << endl; }
	~Factory1 () { cout << ">>> Factory 1 . CONSTRUCT <<<" << endl; }
		
};

class Factory2 : public AbsFactory
{
public:
	
	static Factory2 & Instance ()
	{
		static Factory2 obj;
		return obj;
	}

	AbsPdtA * CreatProductA () 
	{
		return new PdtA2;
	}
	AbsPdtB * CreatProductB ()
	{
		return new PdtB2;
	}
	
protected:
	Factory2 () { cout << ">>> Factory 2 . CONSTRUCT <<<" << endl; }
	~Factory2 () { cout << ">>> Factory 2 . DESTRUCT <<<" << endl; }
		
};

#endif
