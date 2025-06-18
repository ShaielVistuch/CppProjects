#pragma once
/*
 * @brief	function to check fill array with @count prime numbers
 * @param count	number of prime numbers to add
 * @ptr	pointer to first element in the array
 */
void returnArrayOfPrimes(int count, int* ptr);

/*
 * @brief:	function to print array with @count elements
 * @param ptr	pointer to first element in the array
 * @numOfElements:	number of elements to print
 */
void printArrayContent(int* poinerToArray, int numOfElements);

/*
 * @brief	function to get integer from user symbolizing the number of
 * prime numbers to find
 * @return:	number of elements to print if input was valid
 */
int getIntegerFromUser();