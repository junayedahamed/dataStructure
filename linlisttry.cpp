#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
};
struct list *temp, *head, *newnode;

void creat_list(int num)
{
    head = (struct list *)malloc(sizeof(struct list));
    cout << "Enter data:";
    cout << "Enter data 1:";
    cin >> head->data;
    head->next = NULL;
    temp = head;
    for (int i = 2; i <= num; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "Enter data" << i << ": ";
        cin >> newnode->data;

        newnode->next = NULL;

        temp->next = newnode;
        temp = newnode;
    }
}

void print()
{
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int num;
    cout << "enter the list size";
    cin >> num; // scanf
    creat_list(num);
    print();
}