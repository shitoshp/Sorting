// C++ program to sort an array using bucket sort
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
/* Bucket Sort */

void bucketSort (int arr[], int n)
{
  //Here range is [1,100]
  int m = 1000001;
 
  //Create m empty buckets
  int buckets[m];
 
  //Intialize all buckets to 0
  for (int i = 0; i < m; ++i)
    buckets[i] = 0;
 
  //Increment the number of times each element is present in the input
  //array. Insert them in the buckets
  for (int i = 0; i < n; ++i)
    ++buckets[arr[i]];
 
  //Sort using insertion sort and concatenate 
  for (int i = 0, j = 0; j < m; ++j)
    for (int k = buckets[j]; k > 0; --k)
      arr[i++] = j;
}

 
/* Driver program to test above funtion */
int main()
{
    int const SIZE = 1000000;

    int* unsorted_array = new int[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
      unsorted_array[i] = SIZE - i;
      // cout << unsorted_array[i] << endl;
      
    }

    int n = sizeof(unsorted_array)/ sizeof(unsorted_array[0]);

    clock_t t;
    t = clock();
    bucketSort(unsorted_array, n);
    t = clock() - t;
    

    // for (int i = 0; i < SIZE; i++)
    // {
      
    //   cout << unsorted_array[i] << endl;
    // }

    cout << (float) t / CLOCKS_PER_SEC << " seconds." << endl;

    return 0;
}