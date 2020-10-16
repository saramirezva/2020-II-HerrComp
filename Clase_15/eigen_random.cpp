#include<iostream>
#include<Eigen/Dense>

using Eigen::MatrixXd;

int main()
{
  Eigen::MatrixXd m = Eigen::MatrixXd::Random(3,3);
  std::cout<< m <<std::endl;
  return 0;
}
