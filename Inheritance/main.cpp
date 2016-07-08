#include <iostream>

using namespace std;

class Mother{

    public:
        Mother(){
            cout << "Mother ctor" << endl;

        }

        ~Mother(){
            cout << "Mother dtor" << endl;

        }
        void sayHi(){
            cout << var << endl;
        }

    private:
        int var = 0;

    protected:
        int someVar;

};


class Daughter : public Mother
{

    public:
        Daughter(){
            cout << "Daughter ctor" << endl;

        }

        ~Daughter(){
            cout << "Daughter dtor" << endl;

        }


};

int main()
{
    Daughter d;
    d.sayHi();

    return 0;
}
