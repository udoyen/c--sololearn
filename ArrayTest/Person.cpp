#include <iostream>
#include <string>
#include "Birthday.h"
#include "Person.h"


using namespace std;

Person::Person(string n, Birthday b):name(n), bd(b)
{
    //ctor

}


void Person::printinfo()
{
    cout << name << endl;
    bd.printDate();

}
