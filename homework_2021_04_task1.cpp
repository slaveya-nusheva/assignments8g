#include <iostream> //library for reading from standart input and writing to standart output ad standart error
#include <cstdlib> //built-in functions for c++
#include <ctime> //library, allowing to use srand
using namespace std; //direct to cin and cout in iostream

int main() //entry pontt for the program
{
    cout << "Guess My Number Game\n\n"; //output informative message
    int start, finale;//declare variables for interval limit
    start = finale = 0;// initalises both variables to 0
    cout << "Enter the start of number interval: "; //output informative message
    cin >> start; //read from standard input into start
    cout << "Enter the end of number interval: "; //output informative message
    cin >> finale; //read from standard input into finale
    while (!((start < finale && start > 0) || (start < finale && finale < 0))) {
        cout << "Enter start of the interval to be less than end of the interval and both to be either possitive or negative.\n"; //output informative message
        cout << "Enter the start of number interval: "; //output informative message
        cin >> start; //read from standard input into start
        cout << "Enter the end of number interval: "; //output informative message
        cin >> finale; //read from standard input into finale
    }
    srand(time(0)); //seed random number generator
    int num = rand() % (finale - start) + start; // random number within the interval [start; finale]
    int guess = 0; //declare variable guess and assign value of 0
    int gcount = 0; //declare a new variable, assign initial value
    while (guess != num) { //start while cycle with condition
        cout << "Enter a guess between " << start << " and "<< finale <<": ";//output informative message
        cin >> guess;//read from standard input into guess
        if (guess == 0){ //check for stop condition
            break; //escape from the body of while cycle
        }
        gcount++;//add 1 to the variable
        if (guess > num) { //conditional expression comparing both variables
            cout << "Too high!\n\n";//output informative message
        }//end of straight case of conditional block
        else if (guess < num) {//nested conditional in the opposite case of first conditional
            cout << "Too low!\n\n";//output informative message
        }
        else {//opposite part of second conditiojal expression
            cout << "\nCorrect! You got it in "<< gcount << " iterrations.";//output informative message
        }
    }

    return 0;//return the result of function
}
