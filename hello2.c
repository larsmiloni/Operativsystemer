#include <stdio.h>
#include <unistd.h>

int staticVar = 0; // a static variable

main() {
	staticVar += 1;
	int localvar = 0;
	int localvar2 = 4;

	printf ("static address: %x, value: %d\n", &staticVar, staticVar);
	printf ("localvar adress: %x, value: %d\n", &localvar, localvar);
	printf ("localvar2 address: %x, value: %d\n", &localvar, localvar);

	return 0;
}
