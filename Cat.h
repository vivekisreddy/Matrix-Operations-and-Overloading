#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "Animal.h"
using std::cout;
using std::endl;
using std::string;

// derived class
class Cat : public Animal
{

public:
    Cat(string tp, string c);

    Cat(); // default type to "unk"
    void setType(string tp);

    void displayInfo(string c);

    void meow(); // print "I can speak! Meow meow!!"
};
#endif
