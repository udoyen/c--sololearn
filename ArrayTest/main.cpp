#include <iostream>
#include "MyClass.h"
#include "Birthday.h"
#include "Person.h"

using namespace std;

int main()
{
     Birthday bd(2, 21, 1985);
     Person p("David", bd);
     p.printinfo();

    return 0;
}
