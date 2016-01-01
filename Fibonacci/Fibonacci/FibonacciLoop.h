#ifndef __FIBONACCILOOP_H__
#define __FIBONACCILOOP_H__

#include "FibonacciBase.h"

class FibonacciLoop : public FibonacciBase
{
public:
	unsigned int calculate(int term);
};

#endif