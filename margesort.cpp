#include <iostream>
using namespace std;

void marge_sort(int ar[], int l, int mid, int h)
{
    int i = l, k = 0;
    int j = mid + 1;
    int p = l;
    int temp[h - l + 1];

    while (i <= mid && j <= h)
    {

        if (ar[i] >= ar[j])
        {
            temp[k] = ar[j];
            k++;
            j++;
        }
        else
        {
            temp[k] = ar[i];
            k++;
            i++;
        }
    }

    while (i <= mid)
    {
        temp[k++] = ar[i++];
    }
    while (j <= h)
    {
        temp[k++] = ar[j++];
    }

    for (int i = 0, p = l; i < h - l + 1; i++, p++)
    {
        ar[p] = temp[i];
    }
}

void marge(int ar[], int l, int h)
{
    int mid;
    if (l >= h)
    {
        return;
    }
    mid = (l + h) / 2;
    marge(ar, l, mid);

    marge(ar, mid + 1, h);

    marge_sort(ar, l, mid, h);
}

int main()
{
    int ar[5] = {7, 1, 3, 5, 4};
    int l = 0, h = 4;
    marge(ar, l, h);
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << " ";
    }
}