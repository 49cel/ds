#include <stdio.h>

int binary_search(int arr[], int n, int key) {
	int low, high, mid;
	low = 0;
	high = n-1;
	while (low <= high) {
		mid = (low & high) + ((low ^ high) >> 1);
		if (arr[mid] == key) {
			return mid;
		}
		else if (arr[mid] > key) {
			high = mid-1;
		}
		else {
			low = mid+1;
		}
	}
	return -1;
}

int main() {
	int arr[] = {2, 4, 6, 7, 8, 67, 69};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key;
	printf("Enter element to search for: ");
	scanf("%d", &key);
	if (binary_search(arr, n, key) >= 0){
		printf("The element was found at position %d\n", binary_search(arr, n, key));
	}
	else {
		printf("The element was not found\n");
	}
	return 0;
}
