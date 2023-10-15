#include <iostream>
using namespace std;
int main() {
    int x = 0;
    cout << "enter size of array: ";
    cin >> x;
    int arr[x];
    cout << "Enter array values :\n";

    for (int i = 0; i < x;i++){
        cin >> arr[i];
    }
        int big = arr[0], small = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (big < arr[i])
        {
            big = arr[i];
        }
        if (small > arr[i])
        {
            small = arr[i];
        }
  }
  
  cout<<"Largest value: "<<big<<"\nSmallest value: "<<small<<endl;
    return 0;
}