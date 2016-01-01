#ifndef __FIBONACCIBASE_H__
#define __FIBONACCIBASE_H__

class FibonacciBase
{
public:
	FibonacciBase();
	~FibonacciBase();

	virtual unsigned int calculate(int term) = 0;
private:
	
};

#endif