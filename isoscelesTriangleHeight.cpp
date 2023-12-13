#include <iostream>//including library for input and output

#include <cmath>//including library for math operations

#include "ok.h"//including header file for linking to the main.cpp

#include <string> //including library for string manipulation

using namespace std;

void isoscelesTrigH(){

    //Declaration of variables

    int a , b , squareA , squareB , subtract;

    float divide, Sqroot;

    //Displaying welcome note

    cout <<"This software solve isosceles triangle height equation in form of h = sqrt(b^2 - (a^2)/4) \n\n\n";

    //Collecting values from user and assigning them

    cout << "Enter value for a :\n";
    cin >> a;

    cout << "Enter value for b :\n";
    cin >> b;

    //Solving the problem using the input user entered

    squareA = a * a;

    squareB = b * b;

    divide = squareA / 4;

    subtract = squareB - divide;

    Sqroot = sqrt(subtract);

    //Displaying solution and result

    cout << "\n\nSquaring b, we have = " << squareB << endl;

    cout << "Squaring a, we have = " << squareA << endl;

    cout << "Dividing a squared by 4, we have = " << divide << endl;

    cout << "Subtracting what we from b squared, we have = " << subtract <<endl;

    cout << "Taking the square root of what we got above, we have = " << Sqroot << endl;

}
