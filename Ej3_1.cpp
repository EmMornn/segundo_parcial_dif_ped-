#include <iostream>
#include <cmath>

using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int absA = abs(arr[j]);
            int absB = abs(arr[j + 1]);

            bool Swap = false;
            if (absA > absB)
            {
                Swap = true;
            }
            else if (absA == absB && arr[j] > arr[j + 1])
            {
                Swap = true;
            }
            if (Swap)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
};
