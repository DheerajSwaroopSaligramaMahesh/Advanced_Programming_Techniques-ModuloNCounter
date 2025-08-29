/*
 * MultipleDigitCounter.h
 *
 *  Created on: 21-Nov-2024
 *      Author: Dheeraj Swaroop S M
 */

/**
 * @file MultipleDigitCounter.h
 * @brief Header file for the MultipleDigitCounter class.
 *
 * This file defines the MultipleDigitCounter class, which manages a counter with
 * multiple digits. Each digit is a ModuloNCounter that can have different base values
 * and increment independently.
 */

#ifndef MULTIPLEDIGITCOUNTER_H_
#define MULTIPLEDIGITCOUNTER_H_

#include "ModuloNCounter.h"

/**
 * @class MultipleDigitCounter
 * @brief A class that represents a multi-digit counter.
 *
 * The counter consists of multiple digits, each represented by a ModuloNCounter.
 * The counter behaves like a multi-digit number and increments all digits when the count
 * is triggered. The class supports pre and post increment operations.
 */
class MultipleDigitCounter
{
private:
	ModuloNCounter *arrayPtr;
	unsigned int numberOfDigits;
	unsigned int maximumCountValue;

public:
	/**
	 * @brief Constructor for MultipleDigitCounter.
	 *
	 * Initializes the counter with a specified number of digits and maximum count value.
	 *
	 * @param numberOfDigits The number of digits in the counter.
	 * @param maximumCountValue The maximum value that each digit can count up to.
	 */
	MultipleDigitCounter(unsigned int numberOfDigits,
			unsigned int maximumCountValue);

	/**
	 * @brief Destructor for MultipleDigitCounter.
	 *
	 * Cleans up the dynamically allocated memory for the array of ModuloNCounter objects.
	 */
	~MultipleDigitCounter();

	/**
	 * @brief Increments the entire multi-digit counter.
	 *
	 * The count starts from the least significant digit and carries over to the next digits if overflow occurs.
	 */
	void count();

	/**
	 * @brief Pre-increment operator for the multi-digit counter.
	 *
	 * Increments the entire counter by one and returns the updated object.
	 */
	void operator++();

	/**
	 * @brief Post-increment operator for the multi-digit counter.
	 *
	 * Increments the counter by one and returns the previous state.
	 *
	 * @return The counter's state before the increment.
	 */
	MultipleDigitCounter operator++(int);

	/**
	 * @brief Prints the current value of the multi-digit counter.
	 *
	 * Prints the values of all digits in the counter.
	 */
	void printCounter() const;
};

#endif /* MULTIPLEDIGITCOUNTER_H_ */
