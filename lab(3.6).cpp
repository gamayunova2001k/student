#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string> 
#include <sstream>

//Написать программу, которая во вводимом с клавиатуры тексте посчитает количество слов в предложениях и выведет результат на экран.

using namespace std;

int main() {

	string str, word;
	int occurence = 0;

	cout << "Enter text: \n";
	getline(cin, str);

	istringstream ist(str);

	while (ist >> word)
		occurence++;

	cout << "The number of words in the text: " << occurence << endl;
	return 0;
}
/*
int main() {

	string str;

	cout << "Enter text: \n";
	getline(cin, str);

	int m = 0;
	char c = ' ';

	for (int j = 0; j < str.size(); c = str[j++])
		if (str[j] != ' ' and c == ' ')
			m++;

	cout << "The number of words in the text: " << m << endl;
	
	return 0;
}
*/
