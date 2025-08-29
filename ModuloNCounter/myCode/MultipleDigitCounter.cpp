/*
 * MultipleDigitCounter.cpp
 *
 *  Created on: 16-Nov-2024
 *      Author: Dheeraj Swaroop S M
 */

/**
 * @file MultipleDigitCounter.cpp
 * @brief Implementation file for the MultipleDigitCounter class.
 *
 * This file implements the methods defined in the MultipleDigitCounter class.
 * It provides functionality for counting and printing multi-digit numbers,
 * supporting both pre- and post-increment operations.
 */

#include <iostream>

#include "ModuloNCounter.h"
#include "MultipleDigitCounter.h"

using namespace std;

/**
 * @brief Constructor for MultipleDigitCounter.
 *
 * Initializes the counter with a specified number of digits and maximum count value.
 */
MultipleDigitCounter::MultipleDigitCounter(unsigned int numberOfDigits,
		unsigned int maximumCountValue) :
		numberOfDigits(numberOfDigits), maximumCountValue(maximumCountValue)
{
	arrayPtr = new ModuloNCounter[numberOfDigits];
	for (unsigned int i = 0; i < numberOfDigits; i++)
	{
		arrayPtr[i] = ModuloNCounter(maximumCountValue);
	}
}

/**
 * @brief Destructor for MultipleDigitCounter.
 *
 * Cleans up the dynamically allocated array of ModuloNCounter objects.
 */
MultipleDigitCounter::~MultipleDigitCounter()
{
	delete[] arrayPtr;
	arrayPtr = nullptr;
}

/**
 * @brief Increments the counter by one, handling carryover for multiple digits.
 */
void MultipleDigitCounter::count()
{
	bool carry = true; // Initially set carry to true since we are starting the count

	for (int i = numberOfDigits - 1; i >= 0 && carry; i--)
	{
		// If carry is true, increment this digit and check for overflow
		if (arrayPtr[i].count() == 1)
		{
			carry = true; // If overflow occurs, carry is true
		}
		else
		{
			carry = false; // No overflow, stop carrying
		}
	}
}

/**
 * @brief Pre-increment operator for the multi-digit counter.
 */
void MultipleDigitCounter::operator++()
{
	count();
}

/**
 * @brief Post-increment operator for the multi-digit counter.
 *
 * Creates a temporary copy of the counter before incrementing.
 *
 * @return A copy of the counter before incrementing.
 */
MultipleDigitCounter MultipleDigitCounter::operator++(int)
{
	MultipleDigitCounter temp(this->numberOfDigits, this->maximumCountValue);

	for (unsigned int i = 0; i < numberOfDigits; ++i)
	{
		temp.arrayPtr[i] = this->arrayPtr[i];
	}

	// Increment the counter
	this->count();

	// Return the saved state
	return temp;
}

/**
 * @brief Prints the current value of the multi-digit counter.
 */
void MultipleDigitCounter::printCounter() const
{
	for (unsigned int i = 0; i < numberOfDigits; i++)
	{
		arrayPtr[i].printCounter(); // Print each digit
	}
	cout << " ";
}
