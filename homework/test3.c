#include <stdio.h>
#include "lib.h"
#include "assert.h"

int main(int argc, char *argv[])
{
	assertEqualsInts(1, times(1, 1), "1 * 1");
	assertEqualsInts(4, times(2, 2), "2 * 2");
	assertEqualsInts(24, times(6, 4), "6 * 4");
	return 0;
}