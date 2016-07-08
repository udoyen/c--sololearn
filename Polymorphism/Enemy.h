#ifndef ENEMY_H
#define ENEMY_H


class Enemy
{
    public:
        Enemy();
        void setAttackPower(int a);
        // Tells the compiler the function has no body.
        // and must be overriden in the derived classes
        virtual void attack() = 0;

    protected:
        int attackPower;

    private:
};

#endif // ENEMY_H
