#ifndef __FIBONACCIRECURSIVE_H__
#define __FIBONACCIRECURSIVE_H__

#include "FibonacciBase.h"

class FibonacciRecursive : public FibonacciBase
{
public:
	int calculate(int term);
};

#endif