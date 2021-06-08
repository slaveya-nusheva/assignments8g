// Area converter
// include: m2, km2, mi2, yd2, ft2
#include <iostream>
#include <cmath>
using namespace std;

string getUserUnit(bool isInput) {
    string unit = "";
    do{
        cout<<"Enter your "<<(isInput?"input":"output")<<" unit (m2, km2, mi2, yd2, ft2): ";
        cin>>unit;
    } while (!(unit.compare("m2") == 0 || unit.compare("km2") == 0 || unit.compare("mi2") == 0 || unit.compare("yd2") == 0 || unit.compare("ft2") == 0));
    return unit;
}

float convertSqMeters(float inputVal,string outputUnit) {
    float outputVal;
    if(outputUnit.compare("m2") == 0)
    {
        outputVal = 1 * inputVal;
    } else if (outputUnit.compare("km2") == 0) {
        outputVal = 0.000001 * inputVal;
    } else if (outputUnit.compare("mi2") == 0) {
        outputVal = 0.00000038610215854245 * inputVal;
    } else if (outputUnit.compare("yd2") == 0) {
        outputVal = 1.1959900463011 * inputVal;
    } else if (outputUnit.compare("ft2") == 0) {
        outputVal = 10.76391041671 * inputVal;
    } else {
        outputVal = -1;//error
    }
    return outputVal;
}

float convertSqKilometers(float inputVal,string outputUnit) {
    float outputVal;
    if(outputUnit.compare("m2") == 0)
    {
        outputVal = 1000000 * inputVal;
    } else if (outputUnit.compare("km2") == 0) {
        outputVal = 0.1 * inputVal;
    } else if (outputUnit.compare("mi2") == 0) {
        outputVal = 0.38610215854245 * inputVal;
    } else if (outputUnit.compare("yd2") == 0) {
        outputVal = 1195990.0463011 * inputVal;
    } else if (outputUnit.compare("ft2") == 0) {
        outputVal = 10763910.41671 * inputVal;
    } else {
        outputVal = -1;//error
    }
    return outputVal;
}

float convertSqMiles(float inputVal,string outputUnit) {
    float outputVal;
    if(outputUnit.compare("m2") == 0)
    {
        outputVal = 2589988.110336 * inputVal;
    } else if (outputUnit.compare("km2") == 0) {
        outputVal = 2.589988110336 * inputVal;
    } else if (outputUnit.compare("mi2") == 0) {
        outputVal = 1 * inputVal;
    } else if (outputUnit.compare("yd2") == 0) {
        outputVal = 3097600 * inputVal;
    } else if (outputUnit.compare("ft2") == 0) {
        outputVal = 127878400 * inputVal;
    } else {
        outputVal = -1;//error
    }
    return outputVal;
}

float convertSqYards(float inputVal,string outputUnit) {
    float outputVal;
    if(outputUnit.compare("m2") == 0)
    {
        outputVal = 0.83612736 * inputVal;
    } else if (outputUnit.compare("km2") == 0) {
        outputVal = 0.00000083612736 * inputVal;
    } else if (outputUnit.compare("mi2") == 0) {
        outputVal = 0.0000003228305785124 * inputVal;
    } else if (outputUnit.compare("yd2") == 0) {
        outputVal = 1 * inputVal;
    } else if (outputUnit.compare("ft2") == 0) {
        outputVal = 9 * inputVal;
    } else {
        outputVal = -1;//error
    }
    return outputVal;
}

float convertSqFeet(float inputVal,string outputUnit) {
    float outputVal;
    if(outputUnit.compare("m2") == 0) {
        outputVal = 0.09290304 * inputVal;
    } else if (outputUnit.compare("km2") == 0) {
        outputVal = 0.00000009290304 * inputVal;
    } else if (outputUnit.compare("mi2") == 0) {
        outputVal = 0.000000035870064279155 * inputVal;
    } else if (outputUnit.compare("yd2") == 0) {
        outputVal = 0.11111111111111 * inputVal;
    } else if (outputUnit.compare("ft2") == 0) {
        outputVal = 1 * inputVal;
    } else {
        outputVal = -1;//error
    }
    return outputVal;
}

int main () {
    string inputUnit = "";
    float inputVal;
    float outputVal;
    string outputUnit = "";
    cout<<"This program converts between different area units:\n* square meters\n* square kilometers\n* square miles\n* square yards\n* square feet\n\n";

    inputUnit = getUserUnit(true);
    outputUnit = getUserUnit(false);
    do {
        cout<<"Enter the area value (non negative): ";
        cin>>inputVal;
    } while (inputVal < 0 || inputVal > 1000000);

    if (inputUnit.compare("m2") == 0) {
        outputVal = convertSqMeters(inputVal, outputUnit);
    } else if (inputUnit.compare("km2") == 0) {
        outputVal = convertSqKilometers(inputVal, outputUnit);
    } else if (inputUnit.compare("mi2") == 0) {
        outputVal = convertSqMiles(inputVal, outputUnit);
    }else if (inputUnit.compare("yd2") == 0) {
        outputVal = convertSqYards(inputVal, outputUnit);
    }else if (inputUnit.compare("ft2") == 0) {
        outputVal = convertSqFeet(inputVal, outputUnit);
    } else {
        outputVal = -1;//error
    }

    cout<<"Converted value: "<<outputVal<<" "<<outputUnit<<endl;
    return 0;
}
