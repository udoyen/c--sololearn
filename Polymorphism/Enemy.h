#ifndef ENEMY_H
#define ENEMY_H


class Enemy
{
    public:
        Enemy();
        void setAttackPower(int a);
        virtual void attack();

    protected:
        int attackPower;

    private:
};

#endif // ENEMY_H
