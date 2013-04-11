#include <iostream>

#include "reversestring.h"

#define TEST_CASE(test, expected) std::cout << ((test == expected) ? "[PASS]" : "[FAIL]") << " " #test << std::endl

bool test_reverse_string();

int main(int, char **)
{
	test_reverse_string();
	return 0;
}

bool test_reverse_string()
{
	TEST_CASE(reverse_string("Hello"), "olleH");
	TEST_CASE(reverse_string("naturrutan"), "naturrutan");
	
	return true;
}
