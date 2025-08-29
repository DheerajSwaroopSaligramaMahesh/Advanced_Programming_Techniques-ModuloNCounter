/*
 * ModuloNCounter.cpp
 *
 *  Created on: 12-Nov-2024
 *      Author: Dheeraj Swaroop S M
 */

/**
 * @file ModuloNCounter.cpp
 * @brief Implementation file for the ModuloNCounter class.
 *
 * This file implements the methods defined in the ModuloNCounter class, providing
 * functionality for counting and printing in different number systems such as binary,
 * octal, decimal, and hexadecimal.
 */

#include <iostream>

#include "ModuloNCounter.h"
#include "MultipleDigitCounter.h"

using namespace std;

// Default constructor
ModuloNCounter::ModuloNCounter() :
		currentCountValue(0), maximumCountValue(10)
{
}

// Constructor with specified maximum count value
ModuloNCounter::ModuloNCounter(unsigned int maximumCountValue) :
		currentCountValue(0), maximumCountValue(maximumCountValue)
{
}

/**
 * @brief Increments the counter and checks for overflow.
 *
 * @return 1 if the counter reaches the maximum value and overflows, otherwise 0.
 */
unsigned int ModuloNCounter::count()
{
	currentCountValue++;

	if (currentCountValue == maximumCountValue)
	{
		currentCountValue = 0; // Reset the counter when it reaches the maximum value

		return 1; // Return 1 when overflow
	}

	return 0;
}

/**
 * @brief Returns the current value of the counter.
 *
 * @return The current count value.
 */
unsigned int ModuloNCounter::getCurrentCount() const
{
	return currentCountValue;
}

/**
 * @brief Prints the current count value in the appropriate format.
 */
void ModuloNCounter::printCounter() const
{
	if (maximumCountValue == 16 && currentCountValue >= 10)
	{
		char hexChar = 'A' + (currentCountValue - 10);
		cout << hexChar;
	}
	else
	{
		cout << currentCountValue;
	}
}
