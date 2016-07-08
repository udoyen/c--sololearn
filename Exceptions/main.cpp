#include <iostream>

using namespace std;

int main()
{
    try{

        int motherAge = 29;
        int sonAge = 36;
        if(sonAge > motherAge){
            throw 99;
        }

    }catch(int x){

        cout << "wrong age values - Error" << x << endl;


    }

    try {

        int  num1;
        cout << "Enter the first number:";
        cin >> num1;

        int num2;
        cout << "Enter the second number:";
        cin >> num2;

        if(num2 == 0){
            throw 0;
        }


        cout << "Result:" << num1 / num2 << endl;
    }catch(int x){
        cout << "Division by zero!" << endl;

    }



    return 0;
}
