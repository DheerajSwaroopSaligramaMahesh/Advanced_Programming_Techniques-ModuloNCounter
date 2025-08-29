/*
 * ModuloNCounter.h
 *
 *  Created on: 12-Nov-2024
 *      Author: Dheeraj Swaroop S M
 */

/**
 * @file ModuloNCounter.h
 * @brief Header file for the ModuloNCounter class.
 *
 * This file defines the ModuloNCounter class, which represents a counter
 * with a specified modulo (base) that counts from 0 to a maximum value.
 * The counter can reset to 0 once it reaches the maximum value.
 */

#ifndef MODULONCOUNTER_H_
#define MODULONCOUNTER_H_

/**
 * @class ModuloNCounter
 * @brief A class that implements a counter with modulo functionality.
 *
 * The counter counts from 0 to a specified maximum value and resets to 0
 * when the maximum value is reached. The class can work with different bases
 * such as binary, octal, decimal, and hexadecimal.
 */
class ModuloNCounter
{
private:
	unsigned int currentCountValue;
	unsigned int maximumCountValue;

public:
	/**
	 * @brief Default constructor for ModuloNCounter.
	 *
	 * Initializes the counter to 0 and sets the maximum count value to 10.
	 */
	ModuloNCounter();

	/**
	 * @brief Constructor for ModuloNCounter with specified maximum count value.
	 *
	 * @param maximumCountValue The maximum value that the counter can reach before resetting.
	 */
	ModuloNCounter(unsigned int maximumCountValue);

	/**
	 * @brief Increments the current count value by 1.
	 *
	 * Resets the count to 0 if it reaches the maximum count value.
	 *
	 * @return 1 if the counter overflows (reaches maximum value), otherwise 0.
	 */
	unsigned int count();

	/**
	 * @brief Gets the current count value.
	 *
	 * @return The current count value.
	 */
	unsigned int getCurrentCount() const;

	/**
	 * @brief Prints the current count value.
	 *
	 * Prints the count value in the appropriate format based on the maximum count value.
	 */
	void printCounter() const;
};

#endif /* MODULONCOUNTER_H_ */
