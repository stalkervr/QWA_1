#include <stdio.h>

void f1();

int main() {

	f1();
	return 0;
}

void f1() {
	int n1 = 10, n2 = 1;
	for (int i = n1; !(n1 % i == 0 && n2 % i == 0); i--) {

		printf("i = %d n1 *** i = %d  n2 *** i = %d \n", i, n1 % i, n2 % i);
	}
}