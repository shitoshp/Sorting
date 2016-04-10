#include <iostream>
using namespace std;

void insertion_sort(int arr[], int length) {
	int j, temp;

	for (int i = 0; i < length; i++) {
		j = i;

		while (j > 0 && arr[j] < arr[j - 1]) {
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}

int main() {
	int arr[1000000];
	for (int i = 1; i < 1000001; i++) {
		
		arr[i - 1] = i;
	}
	insertion_sort(arr, 1000000);
	cout << arr[100];
	system("pause");
	return 0;
}
