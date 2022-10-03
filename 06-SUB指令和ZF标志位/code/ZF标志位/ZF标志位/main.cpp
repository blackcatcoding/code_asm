#include <cstdio>

int main() {

	printf("----------\n");

	int a = 0xFFFFFFFF;
	int b = 0xFFFFFFFF;
	int c = a - b;

	printf("%x\n", c);

	return 0;
}