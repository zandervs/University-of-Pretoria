#ifndef ACCESSORY_H
#define ACCESSORY_H

#include <fstream>
#include <string>
using namespace std;

class Accessory{
    private:
        string name;
        string description;
        double price;

    public:
        Accessory(string name, string description, double price);
        ~Accessory();
        Accessory(const Accessory&);
        string getDetails();
        double getPrice();
};

#endif /*ACCESSORY_H*/