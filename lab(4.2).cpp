#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

//Написать программу, которая в тексте файла выберет слова, начинающиеся с гласной буквы и запишет результат в новый файл. 
//Входные данные не ограничиваются одной строкой.

using namespace std;

void writeToFile() {
	
	string str, word;
	char vowel[5] = { 'A', 'E', 'I', 'O', 'U' };

	ifstream file("file.txt");
	ofstream outFile("outFile.txt");
	while (getline(file, str)) {

		istringstream ist(str);
		while (ist >> word) {
			for (int i = 0; i < 5; i++) {
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
