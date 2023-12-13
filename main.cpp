#include <iostream>//including library for input and output

#include "ok.h"//including header file for linking other cpp files

#include <fstream> //including library for file handling

#include <string> //including library for string manipulation

#include <stdlib.h> //including library for clearing

using namespace std;

int main()
{

    //Declaration of variables

    int lineNumber, logStatus;

    //creating an environment for login and sign-up

    lineNumber = numberOfLines();

    logStatus = savedData(lineNumber);

    // checking log status

    if(logStatus == 1) {

        //Displaying what this software can handle

        thingsItCanDo();

    } else {

        cout << "";

    }

    return 0;

}
