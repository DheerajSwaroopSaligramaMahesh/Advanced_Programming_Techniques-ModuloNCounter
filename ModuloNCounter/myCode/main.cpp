// Standard (system) header files
#include <iostream>
#include <cstdlib>

// Add more standard header files as required

using namespace std;

// Add your project's header files here
#include "ModuloNCounter.h"
#include "MultipleDigitCounter.h"

// Main program
int main()
{
	// TODO: Add your program code here
	cout << "ModuleNCounter started." << endl << endl;

	int maximumCountValue, countUpto, numberOfDigits;
	cout << "Please enter the parameters of your counter " << endl;
	cout << "Number of digits: ";
	cin >> numberOfDigits;
	cout << endl;
	cout << "type (2/8/10/16): ";
	cin >> maximumCountValue;
	cout << endl;
	cout << "Count upto: ";
	cin >> countUpto;

	if (maximumCountValue != 2 && maximumCountValue != 8
			&& maximumCountValue != 10 && maximumCountValue != 16)
	{
		cout << "Invalid counter base! Exiting." << endl;
		return 1;
	}

	MultipleDigitCounter counter(numberOfDigits, maximumCountValue);

	cout << "Modulo " << maximumCountValue << " Counter" << endl;

	int countsPerLine;
	if (maximumCountValue == 2 || maximumCountValue == 16)
	{
		countsPerLine = 16;
	}
	else if (maximumCountValue == 8)
	{
		countsPerLine = 8;
	}
	else if (maximumCountValue == 10)
	{
		countsPerLine = 10;
	}

	for (int i = 0; i < countUpto; i++)
	{
		counter.printCounter();

		// Print a newline after the required number of values per line
		if ((i + 1) % countsPerLine == 0)
		{
			cout << endl;
		}

		counter.count();
	}

	// Pre - Increment
	MultipleDigitCounter counter1(numberOfDigits, maximumCountValue);
	cout << endl << endl;
	cout << "Pre - Increment: ";
	counter1.printCounter();
	cout << "-> ";
	++counter1;
	counter1.printCounter();

	// Post - Increment
	cout << endl;
	cout << "Post increment: ";
	counter1.printCounter();
	MultipleDigitCounter counter2 = counter1++;
	cout << "-> ";
	counter2.printCounter();

	return 0;
}
