#include "accessory.h"
#include "engine.h"
#include "car.h"
#include <iostream>

int main(){
    Engine engine("I6", 400, 2000, 1200000.0);
    Accessory accessory("BMW Connected Drive", "Wireless Vehicle Monitoring", 5000);


    Car car("X3 M40i", 2);
    car.setEngine(&engine);
    car.addAccessory(&accessory);

    std::cout<< car.getDetails() << std::endl;

    std::cout << "Car Price:" << car.getPrice() << std::endl;
    std::cout << "Number of accessories: " << car.getNumAccessories() << std::endl;

    Accessory** accessories = car.getAccessories();

    for (int i = 0; i < car.getNumAccessories(); i++){
        if (accessories[i] != NULL){
            std::cout << "Accessory " << i + 1 << ":\n" << accessories[i]->getDetails() << std::endl;
        }
    } 
}