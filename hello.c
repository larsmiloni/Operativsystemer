#include <stdio.h>


	char ch = 'c';
	int i = 2024;
	short s = 10;
	float f = 10.4;
	long l = 1024;
	char str[32];
	int nums[10];
	for (int j=0; j<10; j++) {
		i = i +j;
		sprintf(str, "Hello IDATT2202 %d\n", i);
		printf(str);
	}
	return 0;
}
