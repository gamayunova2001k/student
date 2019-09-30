#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

//Написать программу, которая в тексте файла выберет слова, заканчивающиеся согласной буквой и запишет результат в новый файл. 
//Входные данные не ограничиваются одной строкой.

using namespace std;

void writeToFile() {
	string str, word;
	char vowel[21] = { 'Q','W','R','T','Y','P','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M' };

	ifstream file("file.txt");
	ofstream outFile("outFile.txt");
	while (getline(file, str)) {

		istringstream ist(str);
		while (ist >> word) {
			for (int i = 0; i < 21; i++) {
				if (toupper(*word.begin()) == vowel[i])
					outFile << word << endl;
			}
		}
	}
}

void outputFile() {

	const int arrayLength = 500;
	char text[arrayLength];

	ifstream outFile("outFile.txt");
	if (!outFile.is_open()) {
		cout << "Error! File not found!";
	}
	else {
		while (outFile.getline(text, arrayLength)) {
			cout << text << endl;
		}
		outFile.close();
	}
}

int main() {

	writeToFile();

	outputFile();

	return 0;
}