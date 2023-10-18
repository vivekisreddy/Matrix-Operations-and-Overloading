#include "Cat.h"

Cat::Cat(string tp, string c) : Animal(c) // the Cat operator uses the Cat() function which takes in two string; type and color 
{

    type = tp; // sets variable type to tp 
}
Cat::Cat() : Animal("black") // the Cat operator uses the Animal() which takes in the string color
{
    type = "unk"; // sets type to a string 
}
void Cat::setType(string tp) // the Cat operator uses the setType() function which takes in the string type 
{
    type = tp;
}

void Cat::displayInfo(string c) // the Cat operator uses the displayInfo() function which takes in string color and displays the type and color to the terminal 
{
    // prints to the terminal 
    cout << "I am a " << type << endl; 
    cout << "My color is " << c << endl;
}

void Cat::meow() // the Cat operator uses the function meow() to determine the sound that a cat makes 
{
    cout << "I can meow! Meow Meow!!" << endl; // prints this to the terminal 
}