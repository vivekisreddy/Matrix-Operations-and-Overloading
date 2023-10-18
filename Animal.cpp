// base class
#include "Animal.h"

Animal::Animal(string clr) // creates an Animal() function which takes in a string color of animal
{
    color = clr; // sets color variable to string
}
void Animal::eat() // creates an eat() function which prints I can eat to the terminal
{
    cout << "I can eat!" << endl; // prints this to terminal
}

void Animal::sleep() // creates a sleep() function to see if the animal can sleep
{
    cout << "I can sleep!" << endl; // prints this to the terminal
}

void Animal::setColor(string clr) // creates a setColor() function which takes in a string color
{
    color = clr; // sets variable to string color
}

string Animal::getColor() // creates a getColor() function which takes in nothing
{
    return color; // return the color of the animal
}
