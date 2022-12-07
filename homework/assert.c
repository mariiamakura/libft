#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void assertEqualsInts(int expected, int actual, char* message)
{
	if (expected != actual)
	{	
		printf("Assertion failed");
		printf(" ");
		printf("Expected=%i, Actual=%i", expected, actual);
		if (message != NULL)
		{
			printf(" ");
			printf("%s", message);
		}
		printf("\n");
		exit(-1);
	}
}

void assertEqualsStrings(char* expected, char* actual, char* message)
{
	if (!strcmp(expected, actual))
	{	
		printf("Assertion failed");
		printf(" ");
		printf("Expected=%s, Actual=%s", expected, actual);
		if (message != NULL)
		{
			printf(" ");
			printf("%s", message);
		}
		printf("\n");
		exit(-1);
	}
}

//for submmit
//change
//2 try
// main-branch
