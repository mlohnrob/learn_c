#include <stdio.h>

float divide(int a, int b) {
	a = (float) a;
	b = (float) b;
	return a / b;
}


int main() {
	printf("Hello world!\n");
	float result = divide(40, 5);
	printf("%f\n", result);
	return 0;
}

