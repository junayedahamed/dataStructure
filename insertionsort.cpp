#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {5, 7, 9, 8, 1, 4, 6, 3, 5, 11};
    int temp, k, val = 0;

    // insertion sort
    for (int i = 0; i < 10; i++)
    {
        val = arr[i];
        k = i - 1;
        while (k >= 0 && arr[k] > val)
        {
            arr[k + 1] = arr[k];
            k--;
        }
        arr[k + 1] = val;
    }

    // selection  sort
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = i + 1; j < 10; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}