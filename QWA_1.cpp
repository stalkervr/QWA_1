﻿#include <stdio.h>

void f1();
void f2();

int main() {

	f1();
	return 0;
}
//--------------------------------------------------------1
void f1() {
	int n1 = 10, n2 = 1;
	for (int i = n1; !(n1 % i == 0 && n2 % i == 0); i--) {

		printf("i = %d n1 *** i = %d  n2 *** i = %d \n", i, n1 % i, n2 % i);
	}
}
//--------------------------------------------------------1
//--------------------------------------------------------2
void f2() {
	int a = 10, b = 1;
	for (int n = a; n % a != 0 || n % b != 0; n++) {

		printf("n = %d  n *** a = %d  n *** b = %d \n", n, n % a, n % b);
	}
}
//--------------------------------------------------------2