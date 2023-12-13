#include <iostream>//including library for input and output

#include "ok.h"//including header file for linking other cpp files

#include <fstream> //including library for file handling

#include <string> //including library for string manipulation

using namespace std;

int savedData (int lineNum) {

    //Declaration of variables

    string lineData, comment, comment2, userName, pswd;

    int Return;

    //creating an environment for login

    cout << "Enter your User Name: ";//asking for user name

    getline(cin, userName);// collecting user name

    cout << "Enter your Password: ";// asking for password

    cin >> pswd;//collecting password

    // checking number of lines in user_name.txt

    ifstream file("user_name.txt");

    for (int i = 1; i <= lineNum; i++){

        getline(file, lineData);

        if (userName == lineData){

            comment == "found";

            break;

        } else {

            comment == "notFound";

        }

    }

    if (comment == "found") {

        ifstream file2("password.txt");

        for (int i = 1; i <= lineNum; i++) {

            getline(file2, lineData);

            if (pswd == lineData){

                comment2 == "passwordFound";

                break;

            } else {

                comment2 == "passwordNotFound";

            }

        }

    if (comment2 == "passwordFound") {

        Return = 1;

    } else {

        cout << "incorrect username or password\n";

        Return = 0;

    }

    } else {

        cout << "username or password does not exit\n";

    }

    return Return;
}
