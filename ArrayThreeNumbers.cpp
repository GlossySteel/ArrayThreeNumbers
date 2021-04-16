// cPlusPlusTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <array>

using namespace std;

int adding_numbers(int[], int);

int main()
{
	const int size = 3;

	int numbers[size];

	cout << "Enter three numbers that you would like to add.\n";
	cout << "First number:\n";
	cin >> numbers[0];

	cout << endl;

	cout << "Second number:\n";
	cin >> numbers[1];

	cout << endl;

	cout << "Third number:\n";
	cin >> numbers[2];

	cout << endl;

	cout << "The total is: " << adding_numbers(numbers, size) << endl;
}

int adding_numbers(int arr[], int arr_size) {

	int total = 0;


	for (int i = 0; i < arr_size; i++)
	{
		total += arr[i];
	}

	return total;

}