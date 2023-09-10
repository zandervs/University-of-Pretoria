#ifndef ENGINE_H
#define ENGINE_H

#include <fstream>
#include <string>
using namespace std;

class Engine{
    private:
        string name;
        int horsepower;
        int displacement;
        double price;

    public:
        Engine(string name, int horsepower, int displacement, double price);
        Engine(const Engine&);
        ~Engine();
        string getDetails();
        double getPrice();
};

#endif /*ENGINE_H*/