#include <stdio.h>
#include <stdlib.h>

int sub(int a, int b)
{ 
		return a - b;
}
int main(void)
{
	static int a = 5;
	static int b = 3;
	static int result;

	result = sub(a, b);
	printf("%d - %d = %d\n", a, b, result);
	return 0;
}