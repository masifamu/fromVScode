all: calculator

calculator: main.o functions.o
	g++ main.o functions.o -Wall -o calculator

main.o: main.cpp
	g++ -c main.cpp

functions.o: functions.cpp
	g++ -c functions.cpp

clean:
	rm *.o