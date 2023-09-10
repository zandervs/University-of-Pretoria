#ifdef WAREHOUSE_H
#define WAREHOUSE_H

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include "crate.h"

class warehouse {
    private:
        int numCrates;
        crate** crates;

    public:
        warehouse();
        warehouse(int numCrates);
        warehouse(int numCrates, crate** crates);
        warehouse(const warehouse& w);
        ~warehouse();
        int getNumCrates();
        crate** getCrates;
        float getValue();
        ostream& operator<<(ostream& os, warehouse& w);
        istream& operator>>(istream& is, warehouse& w);
        warehouse& operator+=(crate& c);
        warehouse& operator-=(crate& c);
        warehouse operator|(int method);
        warehouse operator|=(int method);
        crate& operator[](int idx);
        warehouse& operator()();
        warehouse& operator()(crate& c);
};

#endif