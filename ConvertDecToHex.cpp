#include <stdio.h>

void convertDecimalToHexa(char arr[], int &length, int number);
void showHexa(char arr[], int length);

int main() {
	int number, length;
	char arr[50];
	
	printf("Number: ");
	scanf("%d", &number);
	
	convertDecimalToHexa(arr, length, number);
	showHexa(arr, length);
	
	return 0;
}

void convertDecimalToHexa(char arr[], int &length, int number) {
	int index;
	
	index = 0;
	while (number != 0) {
		if (number % 16 < 10) {
			// [0-9]
			arr[index] = (char)(number % 16 + 48);	
		} else {
			// [A-F]
			arr[index] = (char)(number % 16 + 55);
		}
		
		number = number / 16;
		index = index + 1;
	}
	
	arr[index] = '\0';
	length = index;
}

void showHexa(char arr[], int length) {
	int index;
	
	printf("Result: ");
	
	for (index = length - 1; index > -1; index--) {
		printf("%c", arr[index]);
	}
}