#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
    struct list *prev;
} *head, *newnode, *temp, *del_node, *prev_h;
void creat_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));
    cout << "Enter data 1: ";
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;
    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter data " << i << ": ";
        cin >> newnode->data;
        newnode->next = NULL;
        head->next = newnode;
        newnode->prev = head;
        head = newnode;
    }
}

void delete_from_mid(int position)
{
    head = temp;
    for (int i = 1; i <= position; i++)
    {
        prev_h = head;
        head = head->next;
    }
    del_node = head;
    head = head->next;
    prev_h->next = head;
    head->prev = prev_h;
    free(del_node);
}

void print()
{
    head = temp;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int size, pos;
    cout << "Enter size:";
    cin >> size;
    creat_list(size);
    print();
    cout << "Enter position which want to delete: ";
    cin >> pos;
    delete_from_mid(pos);
    print();
}