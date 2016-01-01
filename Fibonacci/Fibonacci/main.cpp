#include <iostream>

#include "FibonacciLoop.h"
#include "FibonacciRecursive.h"
#include "FibonacciTailRecursive.h"
#include "FibonacciLambda.h"

using namespace std;

int main(int, char **)
{
	cout << "Enter Nth fibonacci term: ";
	unsigned int fibonacci_term;
	cin >> fibonacci_term;

	FibonacciBase *fibonacci = new FibonacciLoop();

	cout << typeid(*fibonacci).name() << "\t" << fibonacci->calculate(fibonacci_term) << endl;

	delete fibonacci;
	fibonacci = new FibonacciRecursive();
	cout << typeid(*fibonacci).name() << "\t" << fibonacci->calculate(fibonacci_term) << endl;

	delete fibonacci;
	fibonacci = new FibonacciTailRecursive();
	cout << typeid(*fibonacci).name() << "\t" << fibonacci->calculate(fibonacci_term) << endl;

	delete fibonacci;
	fibonacci = new FibonacciLambda();
	cout << typeid(*fibonacci).name() << "\t" << fibonacci->calculate(fibonacci_term) << endl;

	return 0;
}
