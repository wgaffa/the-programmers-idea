#include <iostream>

#include <string>

std::string reverse_string( std::string );

int main(int, char **)
{
	std::cout << "Input string: ";
	std::string string_input;
	std::cin >> string_input;

	std::cout << reverse_string( string_input ) << std::endl;

	return 0;
}

std::string reverse_string( std::string string_input )
{
	for( int i = 0; i < string_input.length() - 1; i++ )
	{
		char temp = string_input[i+1];
		string_input[i+1] = string_input[i];
		string_input[i] = temp;
	}

	return string_input;
}