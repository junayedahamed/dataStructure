#include <iostream>
using namespace std;

struct list
{
    int value;
    struct list *next;

} *newnode, *head, *temp;

void creat_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));
    cout << "Enter value 1: ";
    cin >> temp->value;
    temp->next = NULL;
    head = temp;

    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter value " << i << ":";
        cin >> newnode->value;
        newnode->next = NULL;
        head->next = newnode;
        head = newnode;
    }
}

// void add_in_first(int val)
// {

//     newnode = (struct list *)malloc(sizeof(struct list));
//     newnode->value = val;
//     newnode->next = temp;
//     temp = newnode;
// }

// void add_in_last(int val)
// {
//     head = temp;
//     while (head->next != NULL)
//     {
//         head = head->next;
//     }
//     newnode = (struct list *)malloc(sizeof(struct list));
//     newnode->value = val;
//     newnode->next = NULL;
//     head->next = newnode;
// }

void add_in_middle(int val, int position)
{
    head = temp;
    for (int i = 1; i < position - 1; i++)
    {
        head = head->next;
    }
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->value = val;

    newnode->next = head->next;
    head->next = newnode;
}

void display()
{
    head = temp;
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

int main()
{
    int x, y, z, v, pos;
    cin >> x;
    creat_list(x);

    cin >> v >> pos;
    add_in_middle(v, pos);
    display();
}