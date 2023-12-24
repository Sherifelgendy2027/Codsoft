#include <iostream>
#include <string>
using namespace std;
int main()
{
    string highst , lowst , temps;
    double snums , highnum = -1 , lownum = 100000 , tempnum , avr = 0 ,sum = 0;
    cout << "Enter the number of the students " << endl ;
    cin >> snums ;
    for(int i = 1 ; i <= snums ;i++)
    {
        cout << "enter student name \n" ;
        cin >> temps ;
        cout << "enter student grade \n" ;
        cin >> tempnum ;
        if( tempnum > highnum)
        {
            highnum = tempnum ;
        }
        if( tempnum < lownum)
        {
            lownum = tempnum ;
        }
        sum += tempnum ;
        avr = sum / i ;
    }
        cout << "the highest grade is " << highnum << endl;
        cout << "the lowest grade is " << lownum << endl;
        cout << "the average is " << avr << endl ;
    return 0 ;
}