main: main.o
	g++ -o main main.o 

main.o: main.cpp MyVector.h

clean: 
	rm -rf main.o MyVector.o