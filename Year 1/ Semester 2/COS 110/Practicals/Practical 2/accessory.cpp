#include "accessory.h"
#include <iostream>
#include <sstream>
using namespace std;
std::ostringstream details;


Accessory::Accessory(std::string name, std::string description, double price){
    this->name = name;
    this->description = description;
    this->price = price;
}

Accessory::~Accessory(){

}

Accessory::Accessory(const Accessory &other){
    this->name = other.name;
    this->description = other.description;
    this->price = other.price;
}

std::string Accessory::getDetails(){
    ostringstream details;

    details << "Accessory Name: " << name << "\n";
    details << "Description: " << description << "\n";
    details << "Price: " << price;
    return details.str();
}

double Accessory::getPrice(){
    return price;
}