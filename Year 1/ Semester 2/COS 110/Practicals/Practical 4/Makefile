main: main.o crate.o warehouse.o
	g++ -g main.o crate.o warehouse.o =std=c++98 -o main

crate.o: crate.cpp
	g++ -g -std=c++98 -c crate.cpp

warehouse.o: warehouse.cpp
	g++ -g -std=c++98 -c warehouse.cpp

main.o: main.cpp
	g++ -g -std=c++98 -c main.cpp

clean:
	rm *.o main -f

run:
	./main