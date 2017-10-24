#include <stdio.h>

int add (int a, int b) {
	int c;
	c = a + b;
	return c;
}

int sub (int a, int b) {
	int c;
	c = a - b;
	return c;
}

int main () {
	int a, b, c, d;
	printf("hello, give two numbers!!!!!\n");
	scanf("%d", &a);
	scanf("%d", &b);
	c = add(a, b);
	d = sub(a, b);
	printf("a + b = %d och a - b = %d\n", c, d);
	return 0;
}
