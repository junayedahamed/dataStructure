#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;

} *head, *temp, *newnode, *temp2;

void insert_in_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));
    cin >> temp->data;
    temp->next = NULL;
    head = temp;
    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter data:";
        cin >> newnode->data;
        newnode->next = NULL;
        head->next = newnode;
        head = newnode;
    }
}

void delete_()
{
    head = temp;
    temp2 = head;
    head = head->next;
    temp = head;
    free(temp2);
    cout << endl;
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

int main()
{

    int size;
    cin >> size;
    insert_in_list(size);
    display();
    delete_();
    display();
}