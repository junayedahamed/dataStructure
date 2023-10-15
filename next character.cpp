#include<iostream>
using namespace std;
int main()
{
    string str,str2,s;
   
    int val=0;
    cout << "Enter string : ";
    cin >> str;
     int x = str.length();

     for (int i = 0; i < x;i++){
         val = str[i];
         s = val + 1;
         str2 = str2 + s;
     }

     cout << "next string :" << str2<<endl;
     return 0;
}