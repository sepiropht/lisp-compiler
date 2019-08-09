#include <stdio.h>

void print_hello(int n);

int main(int argc, char**argv) {
	for (int i = 0; i < 1; i++) {
            puts("Hello, world!");
	}
	int j = 0;
	while (j < 1) {
            puts("Hello, world!");
	    j++;
	}
	print_hello(3);
	return 0;
}
void print_hello(int n) {
	for (int i = 0; i < n; i++) {
            puts("Hello, world!");
	}
}
