#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next,*prev;
} *head,*temp,*newnode;


void creat_list(int size){
    head=(struct node *) malloc(sizeof(struct node));
    cout<<"enter first value";
   cin>> head->data;
   head->next=NULL;
   head->prev=NULL;
   temp=head;
   for(int i=2;i<=size;i++){
    newnode=(struct node*) malloc(sizeof(struct node));
    cout<<"enter data "<<i<<":";
    cin>>newnode->data;\
    newnode->next=NULL;
    newnode->prev=temp;
    temp->next=newnode;
    temp=newnode;
    cout<<endl;
   }
}

void display(){
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void search(int val){
    temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            cout<<"Successful"<<endl;
            break;
        }
        else{
           temp= temp->next;

        }
    }
    if(temp==NULL){
        cout<<"Unsuccessful"<<endl;
    }
}


void insert_first(int val){
     newnode=(struct node*) malloc(sizeof(struct node));
     newnode->data=val;
     newnode->next=head;
     head->prev=newnode;
     newnode->prev=NULL;
     head=newnode;
}

int main(){
   int size,val,insert;
   cin>>size;
   creat_list(size);
    cout<<"enter value to insert: ";
    cin>>insert;
    insert_first(insert);

   display();
   cout<<"Enter search: ";
   cin>>val;
   search(val);
}