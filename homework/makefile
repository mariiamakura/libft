build: clean
	mkdir build
	cc -o build/lib.o -c lib.c
	cc -o build/assert.o -c assert.c
	cc -o build/test1 test1.c build/assert.o build/lib.o
	cc -o build/test2 test2.c build/assert.o build/lib.o
	cc -o build/test3 test3.c build/assert.o build/lib.o
	cc -o build/test4 test4.c build/assert.o build/lib.o

clean:
	rm -rf build

test: build
	./build/test1
	./build/test2
	./build/test3
	./build/test4
	echo 'All tests passed'
