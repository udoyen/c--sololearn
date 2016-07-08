#include <iostream>

using namespace std;

//function decalration
int factorial(int n);
void myFunc(int *x);

int main()
{
   int var = 20;
   myFunc(&var);
   cout << var << endl;
   //cout << "myFunc" << " " << myFunc(var); << endl;
    return 0;
}


//function definition
int factorial(int n){

    if(n == 1){

        return 1;

    }else{

        return n * factorial(n-1);

    }

}

void myFunc(int *x){

    *x = 100;
    cout << *x << endl;

}
