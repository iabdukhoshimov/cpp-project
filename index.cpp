#include <iostream>
#include<ctime>
#include<cmath>

using namespace std;

int imGlobal =0;
const double PI = 3.141;

int main(int argc, char** argv)
{
    cout << "Hello World!"<< endl;

    // here I type the data types in cpp
    bool married = true;
    char myGrade = 'A';

    cout << "Min unsighned int" <<
        numeric_limits<u_int16_t>::min()
        << endl;
    
    cout << "Max unsighned int" <<
        numeric_limits<u_int16_t>::max()
        << endl;
    
    cout << "Min float "<< 
        numeric_limits<float>::min() 
        << endl;

    cout << "Max float"<<
        numeric_limits<float>::max()
        << endl;
        
    cout << "Min double"<<
        numeric_limits<double>::min()
        << endl;

    return 0;
}