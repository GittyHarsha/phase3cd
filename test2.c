//ERROR FREE - This test case includes a function
#include<stdio.h>

int multiply(int a)
{
	return 2*a;
}

int main()
{
	int a[2] = {1,2};
	int b[2] = {4,2};
	a = b;
}