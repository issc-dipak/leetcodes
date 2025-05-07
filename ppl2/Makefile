all: main

main: main.o SymmetricDate.o
	g++ -o main main.o SymmetricDate.o

main.o: main.cpp SymmetricDate.hpp
	g++ -c main.cpp

SymmetricDate.o: SymmetricDate.cpp SymmetricDate.hpp
	g++ -c SymmetricDate.cpp

clean:
	rm -f *.o main
