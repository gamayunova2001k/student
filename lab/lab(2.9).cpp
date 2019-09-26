#include <stdio.h>
#include <Windows.h>
#include <iostream>

using namespace std;

int main() {

	int size;

	cout << "Enter size of array: \n";
	cin >> size;

	int* numbers = new int[size];

	cout << "Enter array elements: \n";

	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	for (int i = 0; i < size; i++) {

		int flag = 1;
		for (int j = 2; j * j <= numbers[i]; j++)
			if (numbers[i] % j == 0) {
				flag = 0;
				break;
			}
		if (flag == 1)
			cout << numbers[i] << " ";

	}
	delete[] numbers;
	return 0;
}

/*
#include <stdio.h>
#include <Windows.h>
#include <iostream>
using namespace std;
int main() {
	int size;
	cout << "Enter size of array: \n";
	cin >> size;
	int* numbers = new int[size];
	cout << "Enter array elements: \n";
	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}
	for (int i = 0; i < size; i++)
		for (int j = 2; j < numbers[i]; j++)
		{
			if (numbers[i] % j == 0)
				break;
			else if (numbers[i] == j + 1)
				cout << numbers[i] << " ";
		}
	for (int i = 0; i < size; i++)
		if (numbers[i] == 2)
			cout << numbers[i] << " ";
	delete[] numbers;
	return 0;
}
*/