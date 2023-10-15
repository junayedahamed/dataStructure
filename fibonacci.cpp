#include<iostream>
using namespace std;
int main(){
    int val,x=0,y=1,sum=0;
    cout << "enter third val: ";
    cin >> val;
    cout << x << " " << y<<" ";
    for (int i = 3; i <= val;i++){
        sum = x + y;
        cout << sum << " ";
        x = y;
        y = sum;
    }
    return 0;
}