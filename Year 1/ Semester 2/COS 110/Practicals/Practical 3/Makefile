main: main.o MyString.o
	g++ -g main.o MyString.o -std=c++98 -o main

MyString.o: MyString.cpp
	g++ -g -std=c++98 -c MyString.cpp

main.o: main.cpp
	g++ -g -std=c++98 -c main.cpp

clean:
	rm *.o main -f

run:
	./main