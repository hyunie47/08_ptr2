#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char*pc;
	int *pi;
	double *pd;
	
	pc=(char*)1000; //1
	pi=(int*)1000; //4
	pd=(double*)1000; //8
	
	printf("before : pc=%d, pi=%d, pd=%d\n", pc, pi, pd);
	
	pc++;
	pi++;
	pd++;
	printf("after: pc=%d, pi=%d, pd=%d\n", pc, pi, pd);
	
	return 0;
}
