#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.h"
using std::cout;
using std::endl;
using std::string;

// derived class
class Dog : public Animal
{

public:
    Dog(string tp, string c); // function that takes in two string; type and color

    Dog();                   // function that takes in nothing
    void setType(string tp); // function that takes in the string type and returns nothing

    void displayInfo(string c); // function that takes in string color and returns nothing

    void bark(); // function for determine the sound that the Dog object makes
};
#endif
