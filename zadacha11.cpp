#include <iostream>
#include <cmath>
using namespace std;

bool notContainZero(int n)
{
    int m;
    m = n%10;
    if (m==0)
    {
        return false;
    }
    n = n/10;
    m = n%10;
    if (m==0)
    {
        return false;
    }
    return true;
}

bool divideToOwnDigits(int n)
{
    int m;
    m = n%10;
    if (n%m != 0)
    {
        return false;
    }
    n=n/10;
    m = n%10;
    if (n%m != 0)
    {
        return false;
    }
    n=n/10;
    if (n%m != 0)
    {
        return false;
    }

    return true;
}

int main()
{
    for(int i = 100; i < 1000; i++)
    {
        if (notContainZero(i) && divideToOwnDigits(i) )
        {
            cout<<i<<endl;
        }
    }
    return 0;
}

