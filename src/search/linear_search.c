#include <stdio.h>

int linear_search(int arr[], int n, int key) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == key)
			return i;
	}

	return -1;
}

int main() {
	int key;
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		printf("Enter array element: ");
		scanf("%d", &arr[i]);
	}
	printf("Enter element to search for in the array: ");
	scanf("%d", &key);
	int result;
	result = linear_search(arr, n, key);

	if (result >= 0) {
		printf("The element was found at position: %d\n", result);
	}
	else {
		printf("The element was not found in the array\n");
	}

	return 0;
}
