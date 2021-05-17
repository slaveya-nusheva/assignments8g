#include <iostream>
using namespace std;

float calculateTaxForYear(float tax0, float percent, int ordinalYear)
{
    float tmp = 1;//tmp = temporary
    for(int i = 0; i < ordinalYear; i++)
    {
        tmp *= (percent + 1); // '*=' is tmp = tmp * expression
    }
    return tax0 * tmp;
}



int main ()
{
    float tax0 = 10000;
    float percent = 0.06;
    float tmp;
    for(int i = 1; i < 11; i++)
    {
        tmp = calculateTaxForYear(tax0, percent, i);
        cout<<"Year "<<i<<": tax is "<<tmp<<endl;
    }
    tmp = 0;
    for(int i = 11; i < 15; i++)
    {
        tmp += calculateTaxForYear(tax0, percent, i);// '+=' is tmp = tmp + expr
    }
    cout<<"Years 11 to 14: sum tax is "<<tmp<<endl;
    return 0;
}
