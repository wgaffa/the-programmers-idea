#include <iostream>

using namespace std;

int fibonacci_loop(int Nth_term);
int fibonacci_recursive(int Nth_term);
int fibonacci_tail_recusive(int Nth_term);

// Internal functions
int fibonacci_tail_recusive(int, int, int);

int main(int, char **)
{
	cout << "Enter Nth fibonacci term: ";
	int fibonacci_term;
	cin >> fibonacci_term;

	cout << fibonacci_loop(fibonacci_term) << endl;
	cout << fibonacci_recursive(fibonacci_term) << endl;
	cout << fibonacci_tail_recusive(fibonacci_term) << endl;

	return 0;
}

int fibonacci_loop(int term)
{
	if (term < 0)
		throw invalid_argument("Fibonacci requires a positive integer");

	if (term == 0)
		return 0;

	if (term == 1)
		return 1;

	int last_number = 1;
	int fibonacci = 1;
	for (int current_term = 2; current_term < term; current_term++)
	{
		int temporary_number = last_number;
		last_number = fibonacci;
		fibonacci = fibonacci + temporary_number;
	}

	return fibonacci;
}

int fibonacci_recursive(int term)
{
	if (term < 0 )
		throw invalid_argument("Fibonacci requires a positive integer");

	if (term == 0)
		return 0;

	if (term == 1)
		return 1;

	return fibonacci_recursive(term - 1) + fibonacci_recursive(term - 2);
}

int fibonacci_tail_recusive(int term)
{
	return fibonacci_tail_recusive(term, 1, 1);
}

int fibonacci_tail_recusive(int term, int result, int last)
{
	if (term < 0)
		throw invalid_argument("Fibonacci requires a positive integer");

	if (term == 0)
		return 0;

	if (term == 1)
		return 1;

	if (term == 2)
		return result;

	return fibonacci_tail_recusive(term - 1, result + last, result);
}