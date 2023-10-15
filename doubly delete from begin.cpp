#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
    struct list *prev;
} *head, *temp, *newnode, *temp2, *h_pos;

void creat_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));
    cout << "ENter data 1";
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;
    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter data" << i << ":";
        cin >> newnode->data;
        newnode->next = NULL;
        head->next = newnode;
        newnode->prev = head;
        head = newnode;
    }
}

void delete_from_begin()
{
    h_pos = head;      // h_pos holding head position for backward traverse
    head = temp;       // taking head in front
    temp2 = head;      // taking head in the temp2 so that we can delete that temp2 as it is first node
    head = head->next; // taking head on next node
    head->prev = NULL; // making head prev pointer null cz it's now our first node
    temp = head;       // making head =temp as it was first
    free(temp2);       // here we free temp2 that was our first node
}

void display2()
{
    cout << endl;
    cout << "Display from front: ";
    head = temp;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void display()
{
    head = h_pos;
    cout << endl;
    cout << "Display from back: ";

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->prev;
    }
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    creat_list(size);
    delete_from_begin();
    display();
    display2();
}