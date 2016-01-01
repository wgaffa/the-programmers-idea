#include <stdexcept>

#include "FibonacciLoop.h"

using namespace std;

unsigned int FibonacciLoop::calculate(int term)
{
	if (term < 0)
		throw invalid_argument("Fibonacci requires a positive integer");

	if (term == 0)
		return 0;

	if (term == 1)
		return 1;

	unsigned int last_number = 1;
	unsigned int fibonacci = 1;
	unsigned int temporary_number = last_number;
	for (int current_term = 2; current_term < term; current_term++)
	{
		temporary_number = last_number;
		last_number = fibonacci;
		fibonacci = fibonacci + temporary_number;
	}

	return fibonacci;
}