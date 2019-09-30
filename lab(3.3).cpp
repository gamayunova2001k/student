#include <iostream>
#include <sstream>
#include <string>

//Написать программу, которая во вводимом с клавиатуры тексте выберет слова, заканчивающиеся согласной буквой, и выведет их на экран.

using namespace std;

int main() {

	string str, word;
	char vowel[21] = {'Q','W','R','T','Y','P','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};

	cout << "Enter text: \n";
	getline(cin, str);
	istringstream ist(str);

	cout << "Matching words: \n";

	while (ist >> word)
		for (int i = 0; i < 21; i++) {
			if (toupper(*word.rbegin()) == vowel[i])
				cout << word << endl;
		}
	return 0;
}
