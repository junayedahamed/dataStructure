#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
} *head, *temp, *bef, *newnode;

void creat_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));
    cout << "enter data 1: ";
    cin >> temp->data;
    temp->next = NULL;
    head = temp;
    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter data " << i << ":";
        cin >> newnode->data;
        newnode->next = NULL;
        head->next = newnode;
        head = newnode;
    }
}

void display()
{
    head = temp;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void del(int position)
{
    head = temp;
    for (int i = 0; i <= position; i++)
    {
        bef = head;
        head = head->next;
    }
    bef->next = head;
    free(head);
}

int main()
{
    int size, pos;
    cout << "Enter size: ";
    cin >> size;

    creat_list(size);
    cout << "Enter position which want to delete:";
    cin >> pos;
    del(pos);
    display();
}