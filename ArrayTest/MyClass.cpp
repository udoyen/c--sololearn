#include <iostream>
#include "MyClass.h"

using namespace std;

MyClass::MyClass(int a, int b):regVar(a), constVar(b)
{
    //ctor
    cout << regVar << endl;
    cout << constVar << endl;
}


MyClass::~MyClass()
{
    cout << "Destructor" << endl;
}

void MyClass::myPrint(){

    cout << "Hello" << endl;

}
