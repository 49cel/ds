#include <stdio.h>

void selection_sort(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}

int main() {

	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		printf("Enter array element: ");
		scanf("%d", &arr[i]);
	}
	printf("Array before sorting: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	selection_sort(arr, n);
	printf("Array after sorting: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
