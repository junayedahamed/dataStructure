#include<iostream>
using namespace std;
int main(){
    int x=0,search,count=0,target,index=-1;
    cout << "How many Numbers you want to insert? " << endl;
    cin >> x;
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    cout << "enter search case: ";
    cin >> search;

    //searching point

    search_func:{

    count++;
    cout << "Case" << count<<"\n";
    cout << "Enter Data You want to search : ";
    cin >> target;

    for (int i = 0; i < x;i++){
        if(arr[i]==target){
            index = i;
            break;
        }
    }

    if(index==-1){
        cout << target << " Not found" << endl;
    }
    else{
        cout << target << " is in "<<"index "<< index << endl;
    }

    if(search>count){
        index = -1;
        goto search_func;
    }
    }
    return 0;
}