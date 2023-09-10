main: main.o accessory.o engine.o car.o
    g++ -g main.o accessory.o engine.o car.o -std=c++98 -o main

accessory.o: accessory.cpp
    g++ -g -std=c++98 -c accessory.cpp

engine.o: engine.cpp
    g++ -g -std=c++98 -c engine.cpp

car.o: car.cpp
    g++ -g -std=c++98 -c car.cpp

main.o: main.cpp
    g++ -g -std=c++98 -c main.cpp

clean:
    rm *.o main -f

run:
    ./main
