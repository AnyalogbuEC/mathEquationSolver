#include <iostream>//including library for input and output

#include "ok.h"//including header file for linking other cpp files

#include <fstream> //including library for file handling

#include <string> //including library for string manipulation

using namespace std;

int numberOfLines(){

    //declaration of variables

    int numOfLines = 0;

    string lineText;

    fstream file("user_name.txt");

	while (getline(file, lineText))
	{
		if (!lineText.empty())
		{
			numOfLines  ++;
		}
	}

	return numOfLines;

}
