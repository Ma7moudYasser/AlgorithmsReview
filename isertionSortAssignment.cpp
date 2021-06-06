#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
	int i, j, key;
	for (j = 1; j < n; j++) {
		key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;

	}
}
void printarray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {

	int arr[] = { 11,2,7,6,1,20,3,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, n);
	printarray(arr, n);
	system("pause");
	return 0;

}