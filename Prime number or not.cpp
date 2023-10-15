#include<iostream>
using namespace std;
int main(){
    int val,count=0;
    cout << "Enter number:";
    cin >> val;
    for (int i = 2; i < val;i++){
        if(val%i==0){
            count++;
        }
      

    }
    if(count==0){
         cout << val << " is  prime number" << endl;
    }
    else{
         cout << val << " is not prime number" << endl;
    }
    return 0;
}