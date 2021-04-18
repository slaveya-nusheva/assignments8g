#include <iostream>
#include <cmath>
using namespace std;

int sumaOtCifri(int n)
{
    return n%10 + (n/10)%10 + n/100;
}

bool prostoChislo(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    for (int i = 100; i < 1000; i++)
    {
        if (prostoChislo(sumaOtCifri(i)))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
