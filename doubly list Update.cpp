#include <iostream>
#include <string.h>
using namespace std;

struct list
{
    int str;
    struct list *next;
    struct list *prev;

} *head, *temp, *newnode;

void creat_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));
    cout << "Enter name 1:";
    cin >> temp->str;
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;
    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter name" << i << " :";
        cin >> newnode->str;
        head->next = newnode;
        newnode->next = NULL;
        newnode->prev = head;
        head = newnode;
    }
}

void update_list_value(int val, int pos)
{
    head = temp;
    for (int i = 1; i < pos; i++)
    {
        head = head->next;
    }
    head->str = val;
}

void print()
{
    head = temp;
    while (head != NULL)
    {
        cout << head->str << " ";
        head = head->next;
    }
}

int main()
{
    int size, pos, val;
    cout << "Enter size: ";
    cin >> size;
    creat_list(size);
    cout << "Enter position which you want to update";
    cin >> pos;
    cout << "Enter update value:";
    cin >> val;
    update_list_value(val, pos);

    print();
}