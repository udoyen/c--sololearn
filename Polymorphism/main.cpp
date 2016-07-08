#include <iostream>
#include "Enemy.h"
#include "Ninja.h"
#include "Monster.h"

using namespace std;

int main()
{
    Ninja n;
    Monster m;
    //Enemy e; // Cannot create objects of the base class with a pure virtual function.
               // Hence the base the class becomes an abstract class

    Enemy *e1 = &n;
    Enemy *e2 = &m;
    //Enemy *e3 = &e;

    e1->setAttackPower(20);
    e2->setAttackPower(80);


    e1->attack();
    e2->attack();
    //e3->attack();

    return 0;
}
