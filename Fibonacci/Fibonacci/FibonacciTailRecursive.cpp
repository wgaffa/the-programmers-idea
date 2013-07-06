#include <stdexcept>

#include "FibonacciTailRecursive.h"

using namespace std;

int FibonacciTailRecursive::calculate(int term)
{
	return calculate(term, 1, 1);
}

int FibonacciTailRecursive::calculate(int term, int result, int last)
{
	if (term < 0)
		throw invalid_argument("Fibonacci requires a positive integer");

	if (term == 0)
		return 0;

	if (term == 1)
		return 1;

	if (term == 2)
		return result;

	return calculate(term - 1, result + last, result);
}