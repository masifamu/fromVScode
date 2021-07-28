all: calculator

calculator: main.o sumNumbers.o
	g++ main.o sumNumbers.o -Wall -o calculator

main.o: main.cpp
	g++ -c main.cpp

sumNumbers.o: sumNumbers.cpp
	g++ -c sumNumbers.cpp

clean:
	rm *.o