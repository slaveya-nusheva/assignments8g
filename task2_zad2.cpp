#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string getName(int i) {
	switch(i) {
	case 0: return "scissors";
	case 1: return "rock";
	case 2: return "paper";
	default: return "";
	}
}

int main ()
{
    int c = 0;
    cout <<"Let's play rock, paper, scissors!\n\n";
    do
    {
        cout <<"Make you choice: scissors (0), rock (1), paper (2): ";
        cin >>c;
    } while ( c != 0 && c != 1 && c != 2);

    srand(time(0));
    int comp = rand() % 3;

    if (c == comp)
    {
        cout <<"The computer is "<<getName(comp)<< ". You are "<< getName(c) <<" too. It's a draw.\n";
    }
    else if ( c == 0 && comp == 1)
    {
        cout <<"The computer is "<<getName(comp)<< ". You are "<< getName(c) <<". The computer wins.\n";
    }
    else if ( c == 0 && comp == 2)
    {
        cout <<"The computer is "<<getName(comp)<< ". You are "<< getName(c) <<". You win!\n";
    }
    else if ( c == 1 && comp == 2)
    {
        cout <<"The computer is "<<getName(comp)<< ". You are "<< getName(c) <<". The computer wins.\n";
    }
    else if ( c == 1 && comp == 0)
    {
        cout <<"The computer is "<<getName(comp)<< ". You are "<< getName(c) <<". You win!\n";
    }
    else if ( c == 2 && comp == 1)
    {
        cout <<"The computer is "<<getName(comp)<< ". You are "<< getName(c) <<". You win!\n";
    }
    else if ( c == 2 && comp == 0)
    {
        cout <<"The computer is "<<getName(comp)<< ". You are "<< getName(c) <<". The computer wins.\n";
    }
    return 0;
}
