#include <iostream>
#include <cmath>
using namespace std;

bool sumaOtCifri (int n)
{
    int m = (n%10) + ((n/10)%10) + ((n/100)%10) + (n/1000);
    if (m%2==0 && m>9 && m<100)
    {
        return true;
    }
    return false;
}

int main()
{
    for(int i=1000; i < 10000; i++)
    {
        if (sumaOtCifri(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
