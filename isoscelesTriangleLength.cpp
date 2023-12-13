#include <iostream>//including library for input and output

#include <cmath>//including library for math operations

#include "ok.h"//including header file for linking to the main.cpp

#include <string> //including library for string manipulation

using namespace std;

void isoscelesTrigL(){

    //Declaration of variables

    int a , b , multiply , add;

    //Displaying welcome note

    cout <<"This software solve isosceles triangle length equation in form of L = a + 2b \n\n\n";

    //Collecting values from user and assigning them

    cout << "Enter value for a :\n";
    cin >> a;

    cout << "Enter value for b :\n";
    cin >> b;

    //Solving the problem using the input user entered

    multiply = 2 * b;

    add =  a + multiply ;

    //Displaying solution and result

    cout << "\n\nMultiplying 2 and b, we have = " << multiply << endl;

    cout << "Adding a to product of 2 and b, we have L = " << add <<endl;

}
