#include<iostream>
using namespace std;
int main(){
    int val,multiplication=0;

    cout << "Input number: ";
    cin >> val;

    for (int i = 1; i <= 10;i++){
        multiplication = val * i;
        cout << val << " * " << i << " = " << multiplication << endl;
    }

    return 0;
}