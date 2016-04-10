// Implementing HeapSort in C++

#include <iostream>
#include <ctime>


using namespace std;

void heapMax(int *myList, int i, int n){
	int temp = myList[i], j;
	j = 2*i;

	while(j <= n){
		if (j < n && myList[j+1] > myList[j]){
			j++;
		}
		if (temp > myList[j]){
			break;
		}
		else if (temp <= myList[j]){
			myList[j/2] = myList[j];
			j *= 2;
		}
	}
	myList[j/2] = temp;
	return;
}

void HeapSort(int *myList, int n){
	int temp, k;
	for (k = n; k >=2; k--){
		temp = myList[k];
		myList[k] = myList[1];
		myList[1] = temp;
		heapMax(myList, 1, k-1);
	}
}

void makeMax(int *myList, int n){
	for (int i = n/2; i >=1; i--){
		heapMax(myList, i, n);
	}
}

int main(){

  int numExamples = 1000000;
  int myadd [numExamples];
  for(int i = 1 ; i <= numExamples ; i++){myadd[i] = numExamples - i+1;}

  clock_t time;
  time = clock();
	makeMax(myadd, numExamples);
	HeapSort(myadd, numExamples);

  time = clock() - time;

  cout << "The time taken to sort 1,000,000 numbers is: " << float(time)/CLOCKS_PER_SEC << " secs" << endl;

}
