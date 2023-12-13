#include <iostream>//including library for input and output

#include "ok.h"//including header file for linking other cpp files

#include <fstream> //including library for file handling

#include <string> //including library for string manipulation

#include <stdlib.h> //including library for clearing

using namespace std;

void thingsItCanDo (){

        //Declaration of variables

        int reply;

        //Displaying what this software can handle

        cout << "These are what you can with this software\n";

        cout << "[01] Quadratic Equation\n";

        cout << "[02] Discriminant Equation\n";

        cout << "[03] Isosceles triangle length\n";

        cout << "[04] Isosceles triangle height\n";

        cout << "[99] Logout\n";

        cout << "[00] About\n";

        //Asking user what he wants to do

        cout << "What do you want to do?\t";
        cin >> reply;

        //Checking what user wants to do

        if (reply == 99){

            //break;

        }else if (reply == 00){

            //about();

        }else if (reply == 1){

            quadratic();

        }else if (reply == 2){

            discriminant();

        }else if (reply == 3){

             isoscelesTrigL();

        }else if (reply == 4) {

            isoscelesTrigH();

        }

}
