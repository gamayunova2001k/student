#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>
#include <sstream>

//Написать программу, которая во вводимом с клавиатуры тексте выберет слова, начинающиеся с гласной буквы, и выведет их на экран.

using namespace std;

int main() {

	string str, word;
	char vowel[5] = {'A', 'E', 'I', 'O', 'U'};

	cout << "Enter text: \n";
	getline(cin, str);
	istringstream ist(str);

	cout << "Matching words: \n";

	while (ist >> word)
		for (int i = 0; i < 5; i++) {
			if (toupper(*word.begin()) == vowel[i])
				cout << word << endl;
		}
	
	return 0;
}
