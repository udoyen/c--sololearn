#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//function declaration
void printSomething();
void printSomething(int x);
int timesTwo(int x);
int sum(int a, int b = 42);

int main()
{
    srand(time(0));

    printSomething();
    printSomething(42);

    cout << timesTwo(8) << endl;
    cout << timesTwo(10) << endl;

    cout << rand() << endl;

    for(int x= 1; x <= 10; x++){

        cout << rand() << endl;

    }

    for(int x = 1; x <= 10; x++){

        cout << 1 + (rand() % 6) << endl;

    }


    return 0;
}

// function definition
void printSomething(){
    cout << "Hi there!\n" << endl;
}

//function definition
void printSomething(int x){
    cout << x << endl;
}

int timesTwo(int x){
    return x * 2;

}

int sum(int a, int b = 42){

    int result =a + b;

    return (result);

}
