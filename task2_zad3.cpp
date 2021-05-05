#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateLotteryNumber () {
    srand(time(0)); //seed random number generator
    int lottery;
    do {
        lottery = rand() % 900 + 100; // random number between 100 and 999
        int ld1 = lottery / 100;
        int ld2 = (lottery / 10) % 10;
        int ld3 = lottery % 10;
        if (!(ld1 ==  ld2 || ld1 == ld3 || ld2 == ld3)) {
            break;
        }
    } while (true);
    return lottery;
}

int getUserInput() {
    // Prompt the user to enter a guess
	int guess = 0;// enter a guess
	do {
        cout << "Enter your lottery pick (three digits): ";
        cin >> guess;
	} while (guess < 100 || guess > 999);
	return guess;
}

//Checking how much of the elements of set1 are present in set2
int testSubsetFit(int set1[], int set2[]){
    int count = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            if (set1[i] == set2[j]){
                count++;
                break;
            }
        }
    }
    return count;
}


int main() {
    int lottery = generateLotteryNumber();

    // Prompt the user to enter a guess
	int guess = getUserInput();

	cout << "The lottery number is " << lottery << endl;
	// Check the guess
	if (guess == lottery){
		cout << "Exact match: you win $10,000";
	}
	else {
        // Get digits from lottery
        int lotteryDigits[] = {lottery /100, (lottery / 10) % 10, lottery % 10};
        // Get digits from guess
        int guessDigits[] = {guess / 100, (guess / 10) % 10, guess % 10};
        int count = testSubsetFit(lotteryDigits, guessDigits);

        if (count == 3) {
            cout << "Match all digits: you win $3,000";
        }
        else if (count == 2) {
            cout << "Match one digit: you win $2,000";
        }
        else if (count == 1) {
            cout << "Match one digit: you win $1,000";
        }
        else {
            cout << "Sorry, no match";
        }

	}
	return 0;
}
