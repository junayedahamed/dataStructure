#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
};
struct list *head, *temp, *newnode;
// crating list

void creat_list(int x)
{
    head = (struct list *)malloc(sizeof(struct list));
    cout << "data 1:";
    cin >> head->data;
    head->next = NULL;
    temp = head;

    for (int i = 2; i <= x; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        cout << "data " << i << ":";
        cin >> newnode->data;
        newnode->next = NULL;
        temp->next = newnode;

        temp = newnode;
    }
}
// list printing

void print_list()
{
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// searching element

void search(int target)
{
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            cout << "Successful" << endl;
            break;
        }

        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Unsuccessful" << endl;
    }
}

int main()
{
    int x, y;
    cout << "enter number:";
    cin >> x;
    creat_list(x);
    print_list();
    cout << endl;
    cout << "enter target value: ";
    cin >> y;
    search(y);
}