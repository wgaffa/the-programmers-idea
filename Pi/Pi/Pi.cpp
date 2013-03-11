// Pi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <iomanip>
#include <stdexcept>

double calculate_pi(int runs);

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "calculate_pi(10): " << std::setprecision(15) << calculate_pi(10) << std::endl;
	std::cout << "calculate_pi(1000): " << std::setprecision(15) << calculate_pi(1000) << std::endl;
	std::cout << "calculate_pi(500000): " << std::setprecision(5) << calculate_pi(500000) << std::endl;

	int digits = 1;
	std::cout << "Number of digits: ";
	std::cin >> digits;

	std::cout << "Pi (" << digits << "): " << std::setprecision(digits) << calculate_pi(500000) << std::endl;

	return 0;
}

/*
	Calculate pi using Leibniz series
	4/1 - 4/3 + 4/5 - 4/7 + 4/9 - ...

	runs must be positive non zero
	For each run we add a fraction to the approximation
	
	After 500k runs it produces 5 correct decimal digits
*/
double calculate_pi(int runs)
{
	if (runs < 1)
	{
		throw std::invalid_argument("runs must be non-zero positive integer");
	}

	double pi = 4;
	int fraction = 3;
	bool subtract = true;
	while (runs > 0)
	{
		if (subtract)
		{
			pi -= 4.0/fraction;
		}
		else
		{
			pi += 4.0/fraction;
		}

		subtract = !subtract;
		fraction += 2;
		runs--;
	}

	return pi;
}