#include <iostream>
using namespace std;

void printLine (int star, int space)//function not returning any result is void
{
    for (int i = 0; i < space; i++)
    {
        cout<<" "<<" ";
    }
    for (int i = 0; i < star; i++)
    {
        cout<<"*"<<" ";
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
        printLine(i, lines - i);//the smaller i the bigger lines-i
    }
    return 0;
}
