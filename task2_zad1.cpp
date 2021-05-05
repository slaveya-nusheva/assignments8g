#include <iostream>
using namespace std;

int main ()
{
    cout <<"This program tells if a year is leap or not.\n";
    int y = 0;
    cout <<"Enter a year: ";
    cin >>y;
    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            cout << y <<" is a leap year.";
            else
            cout << y <<" isn't a leap year.";
        }
        else
        cout << y <<" is a leap year.";
    }
    else
    cout << y <<" isn't a leap year.";

    return 0;
}
