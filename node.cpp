#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    };
    struct node *head;

    void creat_list(int n){
    struct node *new_node, *temp;
 
    head = (struct node *)malloc(sizeof(struct node));  //memory allocating for first node

    cout << "enter value of first node : ";
    cin >> head->data;
    head->next = NULL;

    temp = head;    //temp storing the value of head or startng value

    for (int i = 1; i < n;i++){
        new_node = (struct node *)malloc(sizeof(struct node));  //allocating memory for new node

        cout << "enter the value of new node"<<i << ":";

        cin >> new_node->data;      //taking data input in new node

        new_node->next=NULL;         //taking new node adress null

        temp->next = new_node;      //  temp taking the adress of  new node again and again

        temp = new_node;
        
    }
    
    }

    void display(){
         struct node  *temp;
         int count = 1;
         temp = head;   //starting from first node
         cout << "displaying node"<<endl;
         while(temp!=NULL){
        cout <<endl <<count++ << " node :";
        cout << temp->data;
        temp=temp->next;
       
         }
    }
    

int main(){
        int n;
        cout << "number of element in the list : ";
        cin >> n;
        creat_list(n);
        display();
}