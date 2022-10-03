#include <cstdio>

int main() {

	printf("----------\n");

	int a = 0x12345678;

	int* p = &a;

	printf("%x\n", *p);

	return 0;
}