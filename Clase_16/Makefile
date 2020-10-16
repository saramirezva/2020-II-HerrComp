CXX=g++-10
CXXFLAGS=-I /usr/local/include/eigen3

all:fig.pdf

fig.pdf:datos.txt script.gp
	gnuplot script.gp

datos.txt:run.sh eigen_solve_eq.x
	bash run.sh 

%.x: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@