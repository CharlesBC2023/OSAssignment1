all: build

build:
	clang -Wall -std=c17 bcgrep.c -o bcgrep
run: 
	./bcgrep state test.txt
clean:
	rm -f bcgrep