#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc != 3) return 0;

	unsigned int a = strtoul(argv[1],NULL,0);
	unsigned int b = strtoul(argv[2],NULL,0);

	printf("a=%x b=%x\n",a,b);

	if(a < b) {
		if(a > 0) {
			unsigned int c = 3 * a;
			unsigned int d = ~b;

			if(d + c == 0x42) {
				printf("Ok\n");
			} else {
				printf("c + d must be 0x42\n");
			}
		} else {
			printf("a must be greater than 0\n");
		}
	} else {
		printf("a must be less than b\n");
	}

	return 0;
}
