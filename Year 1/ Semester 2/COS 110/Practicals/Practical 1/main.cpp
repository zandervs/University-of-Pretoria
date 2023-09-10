#include <fstream>
#include <iostream>
#include <sstream>

int*** myArr = NULL;
int** numCols = NULL;
int numRows = 0;

void clearArray() {}

void populateFromFile(std::string fileName) {}

void populateFromTerminal() {}

void printArr() {}

void printArrStructure() {}

int main() {
    populateFromFile("input.txt");
    printArr();
    printArrStructure();
    clearArray();
    return 0;
}