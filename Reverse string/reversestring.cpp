#include "reversestring.h"

std::string reverse_string( std::string string_input )
{
	for( unsigned int i = 0; i < floor(string_input.length() / 2); i++ )
	{
		char temp = string_input[string_input.length()-i-1];
		string_input[string_input.length()-i-1] = string_input[i];
		string_input[i] = temp;
	}

	return string_input;
}
