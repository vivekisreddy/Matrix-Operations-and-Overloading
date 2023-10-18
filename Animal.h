// base class

#ifndef ANIMAL_H // if haven't seen ANIMAL_H yet,
#define ANIMAL_H // then define ANIMAL_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Animal
{ // creates a class Animal which takes in private and public variables that other function could use

private:
    string color; // creates a string color which is private

protected:
    string type; // creates a string type which is protected

public:
    Animal(string clr); // creates a function Animal() which is public and can be accessed by any other function
    void eat();         // creates a eat() that returns nothing that is accessible to any function

    void sleep(); // creates a sleep() that returns nothing that is accessible to any function

    void setColor(string clr); // creates a setColor() that returns nothing that is accessible to any function

    string getColor(); // creates a getColor() that returns nothing that is accessible to any function
};

#endif