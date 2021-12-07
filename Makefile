main: main.o
	g++ -o main main.o 

tests: tests.o 
	g++ -o tests tests.o 

main.o: main.cpp MyVector.h

tests.o: tests.cpp MyVector.h doctest.h

clean: 
	rm -rf main.o tests.o