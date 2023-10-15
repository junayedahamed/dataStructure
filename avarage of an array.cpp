#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];
    
    float avg = 0,sum = 0;

    for (int i = 0; i < size;i++){
        cin >> arr[i];
        sum = sum + arr[i];

    }
  
    avg = (sum / size);
    cout << "avarage ="<<avg << endl;
    return 0;
}