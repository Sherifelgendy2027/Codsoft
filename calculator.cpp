#include <iostream>
double sum(double x ,double y)
{
    return x+y ;
}
double sub(double x ,double y)
{
    return x-y ;
}
double mult(double x ,double y)
{
    return x*y ;
}
double div(double x ,double y)
{
    return x/y ;
}
using namespace std;
    
int main()
{
    double fnum = 0 , snum = 0 ;
    char operation ;
    char cond;
    while (1)
    {
        cout << "enter first number\n" ;
        cin >> fnum ;
        cout << "enter second number\n" ;
        cin >> snum ;
        cout << "select operation \n" ;
        cout << " + : sum || - : subtraction || * : multiplacation || / : divesion " << endl;
        cin >> operation ;
        while (1)
        {        
            if (operation == '+')
            {
              cout << sum( fnum , snum ) << endl ;
               break;
            }
            else if (operation == '-')
            {
               cout << sub( fnum , snum ) << endl;
               break;
            }
            else if (operation == '*')
            {
               cout << mult( fnum , snum ) << endl;
               break;
            }
            else if (operation == '/')
            {
               if (snum != 0) 
                {    
                    cout << div( fnum , snum ) << endl;
                    break;
                }
               else
                {
                    cout << "can not devide by zero \n" ;
                    break;
                }
            }
            else
            {
               cout << " unknown operation please try again \n" ;
               cout << " + : sum || - : subtraction || * : multiplacation || / : divesion " << endl;
               cin >> operation ;
            }
        }
        do
        {
            cout << " press e to exit or press c to continue\n" <<
             "Note program does not accept any other values" << endl ;
            cin >> cond ;
        } while (cond != 'e' && cond != 'c');
        if (cond == 'e')
        {
            break;
        }                           
    }
    return 0 ;
}