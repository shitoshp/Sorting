#include <iostream>
#include <ctime>

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
  int numExamples = 1000000;
  int myadd [numExamples];
  for(int i = 0 ; i < numExamples ; i++){myadd[i] = numExamples - i;}

  clock_t time;
  time = clock();

	insertion_sort(myadd, numExamples);

  time = clock() - time;

  cout << "The time taken to sort 1,000,000 numbers is: " << float(time)/CLOCKS_PER_SEC << " secs" << endl;


}
