#include "MyString.h"
#include <iostream>

int main() {
    MyString str1;
    str1.print(); 

    MyString str2("1aBC%$k$48J f {}d\n2\n3kl - D");
    str2.print(); 

    std::string result = str2.operator+("additional123");
    std::cout << result << std::endl; 

    MyString str3("additional456");
    str2.operator+=(str3);
    str2.print();

    MyString str4("abc");
    MyString str5("def");
    std::cout << str4.operator<(str5) << std::endl;
    std::cout << str4.operator>(str5) << std::endl; 
    std::cout << str4.operator==(str5) << std::endl; 
    std::cout << str4.operator!=(str5) << std::endl; 

    str4.operator=("newString");
    str4.print();

    str4.operator=(str5);
    str4.print();

    str4.clear();
    std::cout << str4.operator!() << std::endl;

    return 0;
}