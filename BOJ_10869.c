#include <stdio.h>

int Add(int a, int b) { // �Ű����� : �ִ°���??
	return a + b; // ��ȯ�� : �ִ°���??
}

int Sub(int a, int b) {
	return a - b;
}

int Mul(int a, int b) {
	return a * b;
}

int Div(int a, int b) {
	return a / b;
}

int Mod(int a, int b) {
	return a % b;
}

int main(void) {

	// Input Variable
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	// Each Function
	printf("%d \n", Add(num1, num2));
	printf("%d \n", Sub(num1, num2));
	printf("%d \n", Mul(num1, num2));
	printf("%d \n", Div(num1, num2));
	printf("%d \n", Mod(num1, num2));

	return 0;
}