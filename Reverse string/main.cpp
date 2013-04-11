#include <iostream>

#include "reversestring.h"

std::string reverse_string( std::string );

int main(int, char **)
{
	std::cout << "Input string: ";
	std::string string_input;
	std::cin >> string_input;

	std::cout << reverse_string( string_input ) << std::endl;

	return 0;
}
