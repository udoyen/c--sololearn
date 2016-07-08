#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string a = "I am learning c++";
    char test = 'C';
    cout << "Hello world!" << endl;
    int b[] = {11, 12, 13, 14, 15};
    int c[5] = {12, 13, 14, 15, 16};

    int myArr[5];

    for(int x = 0; x < 5; x++){
        myArr[x] = 42;

        cout << x <<":"<< myArr[x]<< endl;
    }

    int x[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    cout << x [0][0] << endl;

    int score = 5;
    int *scorePtr;
    scorePtr = &score;

    cout << scorePtr << endl;

    int *pl = new int;// request memory
    *pl = 5;// store value

    delete pl; //free up memory
    // now p ia a dangling poiunter

    pl = new int; // reuse for a new address


    int *p = NULL; // initialize pointer with null
    p = new int[20]; //request memory
    delete [] p; // remove array pointed to by p

    cout << "rand" << rand() % 6 << endl;

    return 0;
}
