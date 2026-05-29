#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void max_min(int arr[], int n, int* max, int* min);
int main() {
	int arr[100] = { 0 };
	int n, i,max,min;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	max_min(arr,n,&max,&min);
	printf("max=%d min=%d", max, min);
	
	return 0;
}
void max_min(int arr[],int n, int* max, int* min) {
	if (n <= 0) return;
	int i = 0;
	*max = 0;
	*min = 100;
	for (i = 0; i < n; i++) {
		
		if (arr[i] > *max) {
			*max = arr[i];
		}
		if (arr[i] < *min) {
			*min = arr[i];
		}
	}
}
