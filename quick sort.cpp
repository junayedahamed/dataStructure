#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    int temp = 0;
    for (int j = l; j < h; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[h];
    arr[h] = temp;
    return i + 1;
}

void quick_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pi = partition(arr, l, h);
        quick_sort(arr, l, pi - 1);
        quick_sort(arr, pi + 1, h);
    }
}

int main()
{
    int arr[5] = {1, 8, 2, 3, 5};
    quick_sort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}