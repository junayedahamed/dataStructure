#include<iostream>
using namespace std;

struct person{
   
    int age;
    struct person *next;
};
struct person *head;

void input(int n){
    struct person *temp, *new_node,*store;
    head = (struct person *)malloc(sizeof(struct person));
  
    cout << "enter value of first:  ";
    cin>>head->age;
    head->next = NULL;

    temp = head;
   
    cout << n << " i'm here" << endl;

    for (int i = 1; i <n;i++){
        new_node = (struct person *)malloc(sizeof(struct person));
        cout << "enter name and age of " << i << endl;
    
        cin >> new_node->age;

        new_node->next = NULL;

        temp->next = new_node;

        temp = new_node;
     
    }
    
}

void print(){
    struct person *temp,*store;
    temp = head;
    while(temp!=NULL){
        // cout << head->name << endl;
        cout << temp->age << endl;
        temp = temp->next;
    }
}

void search(int x){
      struct person *temp,*store;
    temp = head;
    while(temp!=NULL){
        
        if(temp->age==x){
            cout << "successful";
            break;
        }
        temp = temp->next;
    }
    if(temp==NULL){
        cout << "Unsuccessful";
    }
}

int main(){
    int num,x;
    cout << "enter number of element : ";
    cin >> num;
    input(num);
    print();
    cout << "enter search value: ";
    cin >> x;
    search(x);
}