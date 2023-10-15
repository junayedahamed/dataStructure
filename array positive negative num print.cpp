#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int x = 0, neg_num_arr[x], y = 0, pos_num_arr[y];
    int size;
    cout << "Enter array size: ";
    cin >> size;
    arr[size];

    for (int i = 0; i < size;i++){
        cin >> arr[i];
        if(arr[i]>0){
            pos_num_arr[y] = arr[i];
            y++;
        }
        if(arr[i]<0){
            neg_num_arr[x] = arr[i];
            x++;
        }
    }
    cout << "Positive numbers: ";
    for (int i = 0; i < y; i++)
    {
        cout << pos_num_arr[i] << " ";
    }
    cout  << endl << endl;
    cout << "Negative numbers: ";
    for (int i = 0; i < x; i++)
    {
        cout << neg_num_arr[i] << " ";
    }
    


}