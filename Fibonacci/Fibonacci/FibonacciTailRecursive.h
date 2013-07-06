#ifndef __FIBONACCITAILRECURSIVE_H__
#define __FIBONACCITAILRECURSIVE_H__

#include "FibonacciBase.h"

class FibonacciTailRecursive : public FibonacciBase
{
public:
	int calculate(int term);

private:
	int calculate(int term, int result, int last);
};

#endif