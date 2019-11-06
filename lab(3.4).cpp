#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string> 

using namespace std;

// Написать программу, которая во вводимом с клавиатуры тексте выберет слово, количество букв «x» в которых будет максимально, и выведет его на экран.

int main() {
	const int stringLength = 250;

	char text[stringLength];
	string word;

	cout << "Enter text: \n";

	cin.get(text, stringLength);

	int kolvoX = 0;
	string wordX;

	istringstream ist(text);
	while (ist >> word) {

		int occurence = 0;

		for (int i = 0; i < word.length(); i++) {
			if (word[i] == 'x') {
				occurence++;
			}
		}

		if (occurence >= kolvoX) {
			kolvoX = occurence;
			wordX = word;
		}
	}
	
	cout << wordX;

	return 0;
}
