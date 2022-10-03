#include <Windows.h>
#include <cstdio>

int main() {
	
	DWORD ieax;
	WORD iax;
	BYTE iah, ial;

	printf("-----------\n");

	__asm {
		mov eax, 0x87654321
		mov ieax, eax
		mov iax, ax
		mov iah, ah
		mov ial, al
	}

	printf("EAX=%x, AX=%x, AH=%x, AL=%x\n", ieax, iax, iah, ial);

	return 0;
}