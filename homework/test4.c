#include <stdio.h>
#include "lib.h"
#include "assert.h"

int main(int argc, char *argv[])
{
	assertEqualsInts(0, length(""), NULL);
	assertEqualsInts(1, length("a"), NULL);
	assertEqualsInts(3, length("aaa"), NULL);
	assertEqualsInts(5, length("aaaaa"), NULL);
	return 0;
}