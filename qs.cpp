#include <iostream>
#include <algorithm>
#include <ctime>


using namespace std;

int partition(int *arr, const int left, const int right) {
	const int mid = left + (right - left) / 2;
	const int pivot = arr[mid];
	// move the mid point value to the front.
	swap(arr[mid], arr[left]);
	int i = left + 1;
	int j = right;
	while (i <= j) {
		while (i <= j && arr[i] <= pivot) {
			i++;
		}

		while (i <= j && arr[j] > pivot) {
			j--;
		}

		if (i < j) {
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i - 1], arr[left]);
	return i - 1;
}

void quicksort(int *arr, const int left, const int right, const int sz) {

	if (left >= right) {
		return;
	}


	int part = partition(arr, left, right);


	quicksort(arr, left, part - 1, sz);
	quicksort(arr, part + 1, right, sz);
}

int main() {
	int numExamples = 1000000;
	int myadd [numExamples];
	for(int i = 0 ; i < numExamples ; i++){myadd[i] = numExamples - i;}

	clock_t time;
  time = clock();

	quicksort(myadd, 0, numExamples - 1, numExamples);

	time = clock() - time;

	cout << "The time taken to sort 1,000,000 numbers is: " << float(time)/CLOCKS_PER_SEC << " secs" << endl;
	return 0;

}
