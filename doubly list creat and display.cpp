#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
    struct list *prev;

} *head, *temp, *newnode;

void creat_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));
    cout << "Enter data1: ";
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;

    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter data " << i << " :";
        cin >> newnode->data;
        newnode->next = NULL;
        head->next = newnode;
        newnode->prev = head;
        head = newnode;
    }
}

void display_backward()
{
    cout << "displaying from backward: " << endl;
    //  head = temp;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->prev;
    }
}

void display_forward()
{
    cout << endl;
    cout << "Displaying from forward: " << endl;

    head = temp;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int size, val;
    cout << "Enter size: ";
    cin >> size;
    creat_list(size);

    display_backward();
    display_forward();
}