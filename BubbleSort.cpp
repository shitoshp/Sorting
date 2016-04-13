#include <iostream>

#define N 1000000
int list[N];

using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {   
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }   
    }
}


int main()
{
    for (int i = N; i > 0; i--)
    {
        list[N - i] = i;
        //cout << list[i];
    }

    clock_t time;

    time = clock();

    BubbleSort(list, N);

    time = clock() - time;

    cout << "It takes " << (float(time) / CLOCKS_PER_SEC) << " seconds to sort integers from 1,000,000 to 1 in bubble sort." << endl;

    return 0;
}