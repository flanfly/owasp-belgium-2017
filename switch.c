#include <stdio.h>

extern void switch_example(void);

void switch_example(void) {
	int val;
	if(scanf("%d",&val) == 1) {
		char *str = NULL;

		switch(val) {
			case 2:
			case 3:
			case 5:
			case 7:
			case 11:
			case 13:
			case 17:
			case 19:
			case 23:
			case 947:
			str = "prime";
				break;
			default:
				str = "not prime";
		}

		printf("%s\n",str);
	}
}

int main(int argc,char* argv[]) {
  switch_example();

  return 0;
}
