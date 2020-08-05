#include <stdio.h>
void main() {
	/*double a;
	int b;
	double c;
	printf("input a fractional number:");
	scanf_s("%lf", &a);
	b = (int) a;
	c = (double) a - b;
	printf("%.2lf", c);*/
	int a;
	int b;
	scanf_s("%d", &a);
	b = a % 10;
	printf("%d", b);
}