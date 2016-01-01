#include <stdexcept>
#include <functional>
#include "FibonacciLambda.h"

using namespace std;

unsigned int FibonacciLambda::calculate(int term)
{
	function<int(int)> fib = [&fib](int term) { if (term == 0) return 0; return term < 2 ? 1 : fib(term - 1) + fib(term - 2); };

	return fib(term);
}