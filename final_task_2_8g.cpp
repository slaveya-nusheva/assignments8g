// Currency converter
// include: bgn, eur, usd, gbp, chf
#include <iostream>
#include <cmath>
using namespace std;

int getCurrIndex(string currLabel) {
    if (currLabel.compare("bgn") == 0) return 0;
    if (currLabel.compare("eur") == 0) return 1;
    if (currLabel.compare("usd") == 0) return 2;
    if (currLabel.compare("gbp") == 0) return 3;
    if (currLabel.compare("chf") == 0) return 4;
    return -1;//unknown currency
}

string getUserUnit(bool isInput) {
    string unit = "";
    do{
        cout<<"Enter your "<<(isInput?"input":"output")<<" unit (bgn, eur, usd, gbp, chf): ";
        cin>>unit;
    } while (getCurrIndex(unit) == -1);//if it's different it will continue cin
    return unit;
}


int main() {
    float currencyMatrix [5][5] = //bgn, eur, usd, gbp,  chf
                           /*bgn*/ {{1, 1.95, 1.6, 2.26, 1.78},
                           /*eur*/ {0.51, 1, 0.82, 1.16, 0.91},
                           /*usd*/ {0.63, 1.22, 1, 1.41, 1.11},
                           /*gbp*/ {0.44, 0.86, 0.71, 1, 0.79},
                           /*chf*/ {0.56, 1.10, 0.9, 1.27, 1}};
    string inputCur = "";
    float inputVal;
    float outputVal;
    string outputCur = "";
    cout<<"This program converts between different currencies:\n* Bulgarian Lev\n* Euro\n* United States Dollar\n* British Pound\n* Swiss Franc\n\n";

    inputCur = getUserUnit(true);
    outputCur = getUserUnit(false);
    do {
        cout<<"Enter the currency value (non negative): ";
        cin>>inputVal;
    } while (inputVal < 0 || inputVal > 1000000);

    int row, col;
    row = getCurrIndex(outputCur);
    col = getCurrIndex(inputCur);

    outputVal = inputVal * currencyMatrix[row][col];
    cout<<"\nThe converted value is "<<outputVal<<" "<<outputCur<<".";
    return 0;
}
