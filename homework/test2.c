#include <stdio.h>
#include "lib.h"
#include "assert.h"

int main(int argc, char *argv[])
{
	assertEqualsInts(0, minus(1, 1), "1 - 1");
	assertEqualsInts(0, minus(2, 2), "2 - 2");
	assertEqualsInts(2, minus(6, 4), "6 - 4");
	return 0;
}