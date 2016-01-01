#ifndef __FIBONACCITAILRECURSIVE_H__
#define __FIBONACCITAILRECURSIVE_H__

#include "FibonacciBase.h"

class FibonacciTailRecursive : public FibonacciBase
{
public:
	unsigned int calculate(int term);

private:
	unsigned int calculate(int term,unsigned int result,unsigned int last);
};

#endif