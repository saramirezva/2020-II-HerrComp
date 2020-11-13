#include <iostream>
#include "mpi.h"
#include <stdio.h>

int main(int argc, char **argv)
{
  MPI_Init(&argc, &argv);

  int pid = 0, nproc = 0;

  MPI_Comm_rank(MPI_COMM_WORLD, &pid);
  MPI_Comm_size(MPI_COMM_WORLD, &nproc);

  std::cout << "Hello world from pid: " << pid
	    << " out of " << nproc << std::endl ;
  
  MPI_Finalize();

  return 0;
}
