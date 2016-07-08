#include "Enemy.h"

Enemy::Enemy()
{
    //ctor
}

void Enemy::setAttackPower(int a){

    attackPower = a;

}

// Here the virtual keyword is nor required to do the function inplementation
void Enemy::attack(){
}
