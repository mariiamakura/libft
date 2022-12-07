#include <stdio.h>
#include <string.h>


int plus(int a, int b)
{
	return (a + b);
}

int minus(int a, int b)
{
	return (a - b);
}

int times(int a, int b)
{
	return (a * b);
}

int length(char* input)
{
	int length = 0;
	char ch = input[0];
	while (ch != '\0') {
		length++;
		ch = input[length];
	}
	return length;
}
