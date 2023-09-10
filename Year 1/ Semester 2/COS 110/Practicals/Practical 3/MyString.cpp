#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include "MyString.h"

std::string MyString::cleanString(std::string dirtystring) {
    std::string cleanedString = "";

    for (std::string::size_type i = 0; i < dirtystring.size(); i++) {
            char ch = dirtystring[i];

            if ((ch >= '0' && ch <= '9') || (ch >= 'A'&& ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                cleanedString = cleanedString + ch;
            }
    }

    return cleanedString;
}

MyString::MyString(std::string instring) {
    mString = instring;
}

MyString::MyString() {
    mString = "";
}

MyString::~MyString() {

}

void MyString::print() {
    std::cout << mString << std::endl;
}

std::string MyString::operator+(std::string rhs) {
    std::string cleanedRhs = cleanString(rhs);
    std::string result = mString;

    result += cleanedRhs;
    return result;
}

std::string MyString::operator+(const MyString& rhs) {
    std::string result = mString;
    result += rhs.mString;
    return result;
}

MyString& MyString::operator+=(const MyString& rhs) {
    mString += rhs.mString;
    return *this;
}

bool MyString::operator<(const MyString& rhs) {
    std::string lhsCleaned = cleanString(mString);
    std::string rhsCleaned = cleanString(rhs.mString);
    return lhsCleaned < rhsCleaned;
}

bool MyString::operator>(const MyString& rhs) {
    std::string lhsCleaned = cleanString(mString);
    std::string rhsCleaned = cleanString(rhs.mString);
    return lhsCleaned > rhsCleaned;
}

MyString& MyString::operator=(std::fstream& file) {
    if (!file.is_open()) {
        return *this;
    }

    std::string content;
    char ch;

    while (file.get(ch)) {
        if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            content += ch;
        }
    }

    mString = content;
    return *this;
}

bool MyString::operator==(const MyString& rhs) {
    std::string lhsCleaned = cleanString(mString);
    std::string rhsCleaned = cleanString(rhs.mString);
    return lhsCleaned == rhsCleaned;
}

bool MyString::operator!=(const MyString& rhs) {
    std::string lhsCleaned = cleanString(mString);
    std::string rhsCleaned = cleanString(rhs.mString);
    return lhsCleaned != rhsCleaned;
}

MyString& MyString::operator=(std::string input) {
    mString = cleanString(input);
    return *this;
}

MyString& MyString::operator=(const MyString& rhs) {
    mString = rhs.mString;
    return *this;
}

void MyString::clear() {
    mString = "";
}

bool MyString::operator!() {
    return mString.length() == 0;
}