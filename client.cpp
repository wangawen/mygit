#include "factory.h"

int main()
{
	AbsPdtA * pa = Factory1::Instance().CreatProductA ();
	AbsPdtB * pb = Factory1::Instance().CreatProductB ();
	
	pa->Func();
	pb->Func();
	
	pa = Factory2::Instance().CreatProductA ();
	pb = Factory2::Instance().CreatProductB ();
	
	pa->Func();
	pb->Func();
	
	return 0;
}
