#include <iostream>
using namespace std;

void printLine (int n)//function not returning any result is void
{
    for (int i = n; i > 1; i--)
    {
        cout<<i<<" ";
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int lines = 0;
    do
    {
        cout<<"Enter the number of lines (5-15): ";
        cin>>lines;
    } while (lines < 5 || lines > 15);
    for (int i = lines; i > 0; i--)
    {
        printLine(i);
    }
    return 0;
}
