#ifndef PERSON_H
#define PERSON_H

#include "Birthday.h"


class Person
{
    public:
        Person(std::string n, Birthday b);
        void printinfo();

    protected:

    private:
        std::string name;
        Birthday bd;
};

#endif // PERSON_H
