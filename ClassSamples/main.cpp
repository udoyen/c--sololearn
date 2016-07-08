#include <iostream>

using namespace std;


class BankAccount{

    public:
        BankAccount(){

        }
        void setName(string x){

            name = x;

        }

        string getName(){

            return name;

        }
        void sayHi(){
            cout << "Hi" << endl;
        }
    private:
        string name;

};

int main()
{
    BankAccount test;
    test.sayHi();
    test.setName("George");

    cout << test.getName() << endl;

    return 0;
}
