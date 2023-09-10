#include "engine.h"
#include <sstream>

Engine::Engine(string name, int horsepower, int displacement, double price){
    this->name = name;
    this->horsepower = horsepower;
    this->displacement = displacement;
    this->price = price;
}

Engine::Engine(const Engine& other){
    this->name = other.name;
    this->horsepower = other.horsepower;
    this->displacement = other.displacement;
    this->price = other.price;
}

Engine::~Engine(){

}

string Engine::getDetails(){
    stringstream ss;

    ss << "Enigne name: " << this->name << "\n"
        << "Horsepower: " << this->horsepower << "\n"
        << "Displacement: " << this->displacement << "\n"
        << "Price: " << this->price << "\n";
    
    return ss.str();
}

double Engine::getPrice(){
    return this->price;
}