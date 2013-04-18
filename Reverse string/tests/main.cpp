#include <iostream>

#include <unittest.h>

#include "reversestring.h"

bool test_reverse_string();

int main(int, char **)
{
	test_reverse_string();
	return 0;
}

bool test_reverse_string()
{
	TEST_ASSERT_EQUAL(reverse_string("Hello"), "olleH");
	TEST_ASSERT_EQUAL(reverse_string("naturrutan"), "naturrutan");
	
	return true;
}
