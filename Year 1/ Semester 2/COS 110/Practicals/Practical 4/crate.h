#ifdef CRATE_H
#define CRATE_H

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

class crate {
    private:
        std::string name;
        int amount;
        float price;

    public:
        crate();
        crate(std::string name, int amount, float price);
        crate(other const& crate);
        crate(std::string s);
        void setName(std::string name);
        void setAmount(int amount);
        void setPrice(float price);
        std::string getName();
        int getAmount();
        float getPrice();
        float getValue();
        ostream& operator<<(ostream& os, crate& c);
        istream& operator>>(istream& is, crate& c);
        crate& operator|(std::string input);
        crate& operator++();
        crate operator++(int);
        crate& operator+=(int a);
        crate& operator-=(int a);
        bool operator==(crate& other);
        bool operator<=(crate& other);
        bool operator>=(crate& other);
        bool operator<(crate& other);
        bool operator>(crate& other)
};

#endif