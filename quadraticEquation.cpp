#include<iostream>//including library for inputs and output

#include "ok.h"//including header file for linking to the main.cpp

#include<cmath>//including library for math operations

#include <string> //including library for string manipulation

using namespace std;

void quadratic(){

        //Declaration of variables

        int a , b , c , multiply , square , sub , multiply2a;
        float Sqroot , subtract , root1 , root2 , add ;

        //clearing the screen

        //Displaying welcome note

        cout <<"This software solve quadratic equation in form of ax^2 + bx + c \n\n\n";

        //Collecting input and assigning it

        cout<<"Enter value for a \n";
        cin>>a;

        cout<<"Enter value for b \n";
        cin>>b;

        cout<<"Enter value for c \n";
        cin>>c;

        //Solving the problem using value user entered

        multiply = 4 * a * c;

        square = b * b;

        sub = square - multiply;

        Sqroot = sqrt(sub);

        add = -b + Sqroot;

        subtract = -b - Sqroot;

        multiply2a = 2 * a;

        root1 = add / multiply2a;

        root2 = subtract / multiply2a;

        //Displaying solving and result

        cout << "\nSquaring b we have = " << square << endl<< endl;

        cout <<"Multiplying 4,a and c we have = "<< multiply << endl<< endl;

        cout <<"Solving (b^2 - 4ac) we have = "<< sub <<endl<< endl;

        cout <<"Taking sqroot of (b^2 - 4ac) we have = "<< Sqroot<< endl<<endl;

        cout <<"Solving -b + sqroot of (b^2 - 4ac) = "<< add <<endl<< endl;

        cout <<"Solving -b - sqroot of (b^2 - 4ac) = "<< subtract <<endl<< endl;

        cout <<"Multiplying 2 and a we have = "<< multiply2a<<endl<< endl;

        cout <<"Dividing by 2a we have X1= "<< root1<<" and X2 = " << root2<<endl<< endl;

}
