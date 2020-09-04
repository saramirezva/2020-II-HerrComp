#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>

float my_root(float a);
float esteban_root(float a);
float proof_root(float a);

int main(void)
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);
  for (int n = 0;n<=100; n++)
    {
      float x = 1.0*n/100;
      float root1 = esteban_root(x);
      float root2 = proof_root(x);
      std::cout<<x<<"\t"<<root1<<"\t"<<root2<<"\t"<<(root2-root1)/root2<<"\n";
    }
  return 0;
}

float my_root(float a)
{
  srand((unsigned) time(NULL));
  float y;
  float f_a;
  for(int n =0; n<=10000; n++)
    {
      y = -1.0*((float) rand() / RAND_MAX)/100;
      f_a = ((y-5)*(y-5)-a*a)/25;
      if(f_a-1 <= 0.000001){
	  break;
	}
      else{
	continue;
      }
    }
  return y;
}

float esteban_root(float a)
{
  float f_a = -1.0*a*a/(5+sqrt(25+a*a));
  return f_a;
}

float proof_root(float a)
{
  float f_a = 5-sqrt(25+a*a);
  return f_a;
}
