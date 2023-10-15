#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[10] = {8, 7, 11, 32, 44, 1, 6, 5, 22, 14};

    for (int i = 0; i < 10;i++){
        cout << arr[i] << "... ";
        for (int j = 0; j < 10-1-i;j++){

            cout << arr[j] << " ";
            
            if(arr[j]>arr[j+1]){
                 
                swap(arr[j], arr[j + 1]);

            }
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 10;i++){
        cout << arr[i]<<" " ;
    }
}