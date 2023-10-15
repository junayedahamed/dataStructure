#include <iostream>
using namespace std;

struct list
{
    int val;
    struct list *next;

} *head, *temp, *newnode;

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

void insert_begin(int val)
{
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->val = val;
    newnode->next = temp;
    temp = newnode;
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
    int size, val;
    cout << "Enter size: ";
    cin >> size;
    creat_list(size);
    cout << "enter value for insert first: ";

    cin >> val;
    insert_begin(val);
    display();
}
