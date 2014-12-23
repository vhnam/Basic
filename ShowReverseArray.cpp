#include <stdio.h>

void showReverseArray();

int main() {
	
	showReverseArray();
	
	return 0;
}

void showReverseArray() {
	int n;
	
	scanf("%d", &n);
	
	if (n == 0) {
		return;
	} else {
		showReverseArray();
		printf("%d\n", n);
	}
}