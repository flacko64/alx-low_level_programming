#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here....
	 * remember;
	 * you are not allowed to use a
	 * you are not allowed to modify p
	 * only one staement
	 * you are not allowed to code anything else tha this line of code
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */

	printf("a[2] = %d\n", 1[2]);
	return (0);
}
