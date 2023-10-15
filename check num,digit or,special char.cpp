#include<iostream>
using namespace std;



int main(){
    int test, val;
    char ch;

    cout << "enter test case: ";
    cin >> test;

    for (int i = 1; i <= test;i++){
        cin >> ch;
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
            if(ch=='A'||ch=='a'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
                cout << ch << " is a character and it's a vowel"<<endl;
                continue;
            }
            else{
                cout << ch << " is a character and it's a coonsonant"<<endl;
                continue;
            }
        }

        if(ch>='0'&&ch<='9'){
            cout << "Digit"<<endl;
        }
        else{
            cout << " Special character "<<endl;
        }
    }
}