// Problem1-6-1_SumOfArithmeticProgression.c : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	unsigned int sum = 0;
	unsigned int term;
	for (size_t i = 0; i < 100; i++)
	{
		term = i + 1;
		sum += term;
	}
	printf("%u", sum);
	return 0;
}

