#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter array size:";
    cin >> size;
    int arr[size];

   

    for (int i = 0; i < size;i++){
        cin >> arr[i];

    }
 int largest = arr[0], smallest = arr[0];
    for (int i = 0; i < size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    cout << "Largest value is " << largest<<endl;
    cout << "smallest value is " << smallest;
}