#include <iostream>
#include <cmath>
using namespace std;

bool pone2EdnakviCifri(int n)
{
    int i0 = n%10;
    int i1 = (n/10)%10;
    if (i0 == i1)
        return true;
    int i2 = (n/100)%10;
    if (i2 == i0 || i2 == i1)
        return true;
    int i3 = n/1000;
    return i3 == i0 || i3 == i1 || i3 == i2;
}

int main()
{
    for (int i=1000; i < 10000; i++)
    {
        if (pone2EdnakviCifri(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
