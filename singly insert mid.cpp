#include <iostream>
using namespace std;

struct list
{
    int val;
    struct list *next;

} *head, *temp, *newnode, *prev_h;

void creat_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));
    cout << "Enter data1: ";
    cin >> temp->val;
    temp->next = NULL;
    head = temp;
    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter data " << i << " :";
        cin >> newnode->val;
        newnode->next = NULL;
        head->next = newnode;
        head = newnode;
    }
}

void insert_mid(int val, int pos)
{
    head = temp;
    for (int i = 1; i < pos - 1; i++)
    {

        head = head->next;
    }
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->val = val;
    newnode->next = head->next;
    head->next = newnode;
}

void display()
{
    head = temp;
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    int size, pos, val;
    cout << "ENter size of list: ";
    cin >> size;
    creat_list(size);
    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;
    insert_mid(val, pos);
    display();
}
