#include <stdexcept>

#include "FibonacciRecursive.h"

using namespace std;

unsigned int FibonacciRecursive::calculate(int term)
{
	if (term < 0 )
		throw invalid_argument("Fibonacci requires a positive integer");

	if (term == 0)
		return 0;

	if (term == 1)
		return 1;

	return calculate(term - 1) + calculate(term - 2);
}