#include <stdio.h>
#include "lib.h"
#include "assert.h"

int main(int argc, char *argv[])
{
	assertEqualsInts(2, plus(1, 1), "1 + 1");
	assertEqualsInts(4, plus(2, 2), "2 + 2");
	assertEqualsInts(10, plus(6, 4), "6 + 4");
	return 0;
}