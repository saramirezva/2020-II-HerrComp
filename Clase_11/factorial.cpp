#include"factorial.h"
long factorial(long n)
{
	return n <= 1 ?  n : n*factorial(n-1);
}
