#include <iostream>
#include <string>

using namespace std;


class A{//Birthday
    public:
        A(int m, int d, int y): month(m), day(d), year(y){


        }
        void printDate()
        {
            cout << month << "/" << day << "/" << year << endl;

        }

    private:
        int month;
        int day;
        int year;

};

class B{//Person

    public:
        B(string n, A b): name(n), bd(b){


        }

    private:
        string name;
        A bd;

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
