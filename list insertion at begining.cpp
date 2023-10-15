#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
};
struct list *head, *temp, *newnode;

void creat_list(int size)
{
    head = (struct list *)malloc(sizeof(struct list));
    cout << "Enter data 1: ";
    cin >> head->data;
    head->next = NULL;
    temp = head;
    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter data " << i << " :";
        cin >> newnode->data;
        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
    }
}

void insert_data_begin(int data)
{

    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->data = data; // entering new data at node

    newnode->next = head; // connecting new data with existence node head
    head = newnode;       // making head as a llocation of new node
}

void print_list()
{
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int size;
    cout << "Enter size of list :";
    cin >> size;
    creat_list(size);
    int data;
    cout << "Enter data which want to insert at begin: ";
    cin >> data;
    insert_data_begin(data);
    print_list();
}