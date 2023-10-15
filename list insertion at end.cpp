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
    temp = (struct list *)malloc(sizeof(struct list));
    cout << "Enter data 1 : ";
    cin >> temp->data;
    temp->next = NULL;
    head = temp;

    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter data " << i << " :";
        cin >> newnode->data;
        newnode->next = NULL;
        head->next = newnode;
        head = newnode;
    }
}

void print_list()
{
    head = temp;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void insert_node_at_end(int data)
{
    while (head->next != NULL)

    {
        head = head->next;
    }
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->data = data;
    newnode->next = NULL;
    head->next = newnode;
}

int main()
{
    int size, data;
    cout << " enter list size: ";
    cin >> size;
    creat_list(size);
    cout << "enter end data: ";
    cin >> data;
    insert_node_at_end(data);
    print_list();
}