
#include "Dog.h"

Dog::Dog(string tp, string c) : Animal(c) // the Dog operator takes in two strings
{

    type = tp; // sets type variable to tp
}
Dog::Dog() : Animal("black") // the Dog operator uses the Animal() function
{
    type = "unk";
}
void Dog::setType(string tp) // function to set the type of the animal
{
    type = tp;
}

void Dog::displayInfo(string c) // function for displaying the type string and the color string in the terminal
{
    cout << "I am a " << type << endl;
    cout << "My color is " << c << endl;
}

void Dog::bark() // the Dog operator uses the bark() function to determine the sound a dog makes
{
    cout << "I can bark! Woof woof!!" << endl; // prints this to the terminal
}
