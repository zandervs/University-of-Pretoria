#include "car.h"
#include "accessory.h"
#include "engine.h"

Car::Car(string name, int numAccessories){
    this->name = name;

    if (numAccessories <= 0){
        this->numAccessories = 0;
        this->accessory = NULL;
    }
    else{
        this->numAccessories = numAccessories;
        this->accessory = new Accessory*[numAccessories];
        for (int i = 0; i < numAccessories; i++){
            this->accessory[i] = NULL;
        }
    }

    this->engine = NULL;
}

Car::Car(const Car& other){
    this->name = other.name;
    this->numAccessories = other.numAccessories;
    this->engine = other.engine;

    if (other.engine == NULL){
        this->engine = new Engine(*other.engine);
    }

    if (other.accessory != NULL){
        this->accessory = new Accessory*[numAccessories];

        for (int i = 0; i < numAccessories; i++){
            if (other.accessory[i] != NULL){
                this->accessory[i] = new Accessory(*other.accessory[i]);
            } 
            else{
                this->accessory[i] = NULL;
            }
        }
    }
    else{
        this->accessory = NULL;
    }
}

Car::~Car(){
    delete engine;

    if (accessory != NULL){
        for (int i = 0; i < numAccessories; i++){
            delete accessory[i];
        }
        delete[] accessory;
    }
}

Car& Car::operator=(const Car&other){
    if (this == &other){
        return *this;
    }

    delete engine;

    if (accessory != NULL){
        for (int i = 0; i < numAccessories; i++){
            delete accessory[i];
        }
        delete[] accessory;
    }

    this->name = other.name;
    this->numAccessories = other.numAccessories;
    this->engine = NULL;

    if (other.engine != NULL){
        this->engine = new Engine(*other.engine);
    }

    if (other.accessory != NULL){
        this->accessory = new Accessory*[numAccessories];

        for (int i = 0; i < numAccessories; i++){
            if (other.accessory[i] != NULL){
                this->accessory[i] = new Accessory(*other.accessory[i]);
            }
            else{
                this->accessory[i] = NULL;
            }
        }
    }
    else{
        this->accessory = NULL;
    }
    return *this;
}

double Car::getPrice() const{
    double price = 0.0;

    if (engine != NULL){
        price += engine->getPrice();
    }

    if (accessory != NULL){
        for (int i = 0; i < numAccessories; i++){
            if(accessory[i] != NULL){
                price += accessory[i]->getPrice();
            }
        }
    }
    return price;
}

string Car::getName() const{
    return name;
}

int Car::getNumAccessories() const{
    return numAccessories;
}

Accessory** Car::getAccessories() const{
    return accessory;
}

Engine* Car::getEngine() const{
    return engine;
}

bool Car::addAccessory(Accessory* accessory){
    if (this->accessory == NULL){
        return false;
    }

    for (int i = 0; i < numAccessories; i++){
        if(this->accessory[i] == NULL){
            this->accessory[i] = accessory;
            return true;
        }
    }
    return false;
}

void Car::setEngine(Engine* engine){
    if (engine != NULL && this->engine == engine){
        return;
    }

    delete this->engine;
    this->engine = NULL;

    if (engine != NULL){
        this->engine = new Engine(*engine);
    }
}

string Car::getDetails() const{
    string details = "Details:\n";
    details += "Car: " + name + "\n";
    
    char buffer[50];
    snprintf(buffer, sizeof(buffer), "%.2f", getPrice());
    details += "Price: " + string(buffer) + "\n";

    if (engine != NULL){
        details += engine->getDetails() + "\n";
    }

    if (accessory != NULL){
        for (int i = 0; i < numAccessories; i++){
            if (accessory[i] != NULL){
                details += accessory[i]->getDetails() + "\n";
            }
        }
    }

    return details;
}