// Write a program to find the increasing array with the largest sum of array.

#include <stdio.h>

const int MIN = -2147483647;

void importArray(int array[], int &length);
void exportArray(int array[], int length);
void exportArray(int array[], int length, int from, int to);
void handleRequirement(int array[], int length, int &from, int &to);

int main() {
	int array[100], length, from, to;
	
	importArray(array, length);
	exportArray(array, length);
	handleRequirement(array, length, from, to);
	exportArray(array, length, from, to);
	
	return 0;
}

void handleRequirement(int array[], int length, int &from, int &to) {
	int result, max, index, pointer;
	
	result = MIN;
	
	for (index = 0; index < length - 1; index++) {
		
		max = array[index];
		
		for (pointer = index + 1; pointer < length; pointer++) {
			if (array[pointer] >= array[pointer - 1]) {
				to = pointer;
				max += array[pointer];
			} else {
				break;
			}
		}
		
		if (result <= max) {
			from = index;
			to = pointer - 1;
			result = max;
		}
	}
}

void importArray(int array[], int &length) {
	int index;
	
	do
	{
		printf("N: ");
		scanf("%d", &length);
	} while (length < 0);
	
	printf("Import array: ");
	
	for (index = 0; index < length; index++) {
		scanf("%d", &array[index]);
	}
}

void exportArray(int array[], int length) {
	int index;
	
	printf("Export array: ");
	
	for (index = 0; index < length; index++) {
		printf("%d ", array[index]);
	}
	printf("\n");
}

void exportArray(int array[], int length, int from, int to) {
	int index;
	
	printf("Export array: ");
	
	for (index = from; index <= to; index++) {
		printf("%d ", array[index]);
	}
	printf("\n");
}