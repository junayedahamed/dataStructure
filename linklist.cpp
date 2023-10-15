#include<iostream>
//#include <bits/stdc++.h>
using namespace std;

 class node{
    public:
    int value=6;
    node *next;
};

int main(){
    int count = 0;
    node *head;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;
    node *four = NULL;

    one = new node();
    two = new node();
    three = new node();
    four = new node();

     one->value = 10;
    two->value = 20;
    three->value = 53;
    four->value=41;

  head = one;
    
    one->next = two;
   two->next = three;
   three->next = two;
   four->next=NULL;



  while(head!=NULL){
      cout << head->value << endl;
      count++;
      if(count>3){
          three->next = four;
      }
      head= head->next;
  }
}
