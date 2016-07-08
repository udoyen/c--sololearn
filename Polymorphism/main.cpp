#include <iostream>
#include "Enemy.h"
#include "Ninja.h"
#include "Monster.h"

using namespace std;

int main()
{
    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->setAttackPower(20);
    e2->setAttackPower(80);

    e1->attack();
    e2->attack();

    return 0;
}
