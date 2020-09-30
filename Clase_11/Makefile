all: ejemplo.x

test: test_factorial.x test_catch2.x

%.o: %.cpp
	g++ -c $<

ejemplo1.x: ejemplo.o factorial.o
	g++ $^ -o $@

test_factorial.x: test_factorial.o factorial.o
	g++ $^ -o $@

test_catch2.x: test_catch2.o factorial.o
	g++ $^ -o $@

clean:
	rm -f *.x *.o a.out
