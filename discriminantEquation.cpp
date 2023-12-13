#include<iostream>// including library for input and output

#include "ok.h"//including header file for linking to the main.cpp

#include<cmath>//including library for math operations

#include <string> //including library for string manipulation

using namespace std;

void discriminant(){

        //Declaration of variables

        int a , b , c , multiply , square , subtract;

        //Displaying welcome note

        cout <<"This software solve discriminant equation in form of D = b^2 - 4ac \n\n\n";

        //Collecting input(s) and assigning variables to the input(s)

        cout<<"Enter value for a \n";
        cin>>a;

        cout<<"Enter value for b \n";
        cin>>b;

        cout<<"Enter value for c \n";
        cin>>c;

        //Solving the problem using the inputs provided by user

        multiply = 4 * a * c;

        square = b * b;

        subtract = square - multiply;

        //Displaying solving and result

        cout << "\nSquaring b we have = " << square << endl<< endl;

        cout <<"Multiplying 4,a and c we have = "<< multiply << endl<< endl;

        cout <<"Solving (b^2 - 4ac) we have D = "<< subtract <<endl<< endl;

}
