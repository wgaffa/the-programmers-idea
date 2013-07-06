#include <iostream>

#include "FibonacciLoop.h"
#include "FibonacciRecursive.h"
#include "FibonacciTailRecursive.h"
#include "FibonacciLambda.h"

using namespace std;

int main(int, char **)
{
	cout << "Enter Nth fibonacci term: ";
	int fibonacci_term;
	cin >> fibonacci_term;

	FibonacciBase *fibonacci = new FibonacciLoop();

	cout << fibonacci->calculate(fibonacci_term) << endl;

	delete fibonacci;
	fibonacci = new FibonacciRecursive();
	cout << fibonacci->calculate(fibonacci_term) << endl;

	delete fibonacci;
	fibonacci = new FibonacciTailRecursive();
	cout << fibonacci->calculate(fibonacci_term) << endl;

	delete fibonacci;
	fibonacci = new FibonacciLambda();
	cout << fibonacci->calculate(fibonacci_term) << endl;

	return 0;
}
