#include<iostream>
#include"factorial.h"

int main(int argc, char**argv)
{
        int n = std::atoi(argv[1]);
	std::cout<< "El factorial de " << n << " es : "<<factorial(n)<<"\n";
	return 0;
}
