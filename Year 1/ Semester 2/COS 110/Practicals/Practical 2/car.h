#ifndef CAR_H
#define CAR_H

#include <fstream>
#include "accessory.h"
#include "engine.h"

class Car{
    private:
        std::string name;
        int numAccessories;
        Engine* engine;
        Accessory** accessory;

    public:
        Car(std::string name, int numAccessories);
        Car(const Car&);
        ~Car();
        Car& operator=(const Car& other);

        double getPrice() const;
        std::string getName() const;
        int getNumAccessories() const;
        Accessory** getAccessories() const;
        Engine* getEngine() const;

        bool addAccessory(Accessory* accessory);
        void setEngine(Engine* engine);
        std::string getDetails() const;

};

#endif /*CAR_H*/