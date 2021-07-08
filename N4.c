#include <stdio.h>
void main() {
	int a;
	int b;
	int c;
	scanf_s("%d%d", &a, &b);
	
	c = a;
	a = b;
	b = c;
	printf("%d\n%d\n", a, b);
}
