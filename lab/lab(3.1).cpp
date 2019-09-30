#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <sstream>
#include <string> 

//Написать программу, которая во вводимом с клавиатуры тексте заменит все окончания слов «x» на «z» и выведет результат на экран.

using namespace std;

int main() {

	const int arrayLength = 250;

	char text[arrayLength];
	string word;

	cout << "Enter text: \n";

	cin.get(text, arrayLength);

	istringstream ist(text);
	while (ist >> word) {
		for (int i = 0; i < 1; i++) {
			if (*word.rbegin() == 'x') {
				*word.rbegin() = 'z';
				cout << word << " ";
			}
			else {
				cout << word << " ";
			}
		}
	}
	return 0;
}


/*
int main() {

	string str, word;

	char a[2] = { 'x','z' };

	cout << "Enter text: \n";

	getline(cin, str);

	istringstream ist(str);

	while (ist >> word) {
		for (int i = 0; i < 1; i++) {
			if (*word.rbegin() == a[0]) {
				*word.rbegin() = a[1];
				cout << word << " ";
			}
			else {
				cout << word << " ";
			}
		}
	}
	return 0;
}
*/

/*
int main() {

	string s0, s1 = "x ", s2 = "z";

	cout << "Enter text: \n";
	getline(cin, s0);

	for (int i = 0; i < s0.length(); i++) {
		if (s0[i] == s1[0] and s0[i + 1] == s1[1]) {
			s0[i] = s2[0];
		}
	}
	if (s0[s0.size() - 1] == 'x') {
		s0[s0.size() - 1] = 'z';
	}
	cout << "Result: \n" << s0;
	return 0;
}

*/
