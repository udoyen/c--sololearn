#include <iostream>

using namespace std;


template<class T, class U> T smaller(T a, U b){

    return (a < b ? a : b);

};

template<class T> class MyClass{

    public:
        MyClass(T x){
            cout << x << "- not a char" << endl;

        }


};


template< > class MyClass<char>{

    public:
        MyClass(char x){
            cout << x << "is a char" << endl;
        }

};

template<class T> class Pair{

    public:
        Pair(T a, T b):first(a), second(b){


        }
        T bigger();


    private:
        T first, second;


};

template<class T> T Pair<T>::bigger(){

    //some code
    return(first>second ? first : second);

}

int main()
{
    Pair<int> obj(3, 4);
    cout << obj.bigger() << endl;

    Pair<double> obj2(12.34, 23.12);
    cout << obj2.bigger();

    return 0;
}
