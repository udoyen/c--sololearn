#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;

    ifstream MyFile2;
    MyFile2.open("/home/george/samplefile/cplusplus.txt");

    while(getline(MyFile2, line)){

       cout << line << '\n';

          }


     MyFile2.close();



    return 0;
}
