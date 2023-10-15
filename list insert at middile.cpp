#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
};
struct list *head, *newnode, *temp, *prev;

void creat_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));

    cout << "Enter first number: ";
    cin >> temp->data;
    temp->next = NULL;
    head = temp;

    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));

        cout << "enter data " << i << ":";
        cin >> newnode->data;
        newnode->next = NULL;
        head->next = newnode;
        head = newnode;
    }
}

// void inset_end(int data)
// {
//     newnode = (struct list *)malloc(sizeof(struct list));
//     head = temp;

//     while (head->next != NULL)
//     {
//         head = head->next;
//     }

//     newnode->data = data;
//     head->next = newnode;
//     newnode->next = NULL;
// }

// void insert_begin(int data)
// {
//     newnode = (struct list *)malloc(sizeof(struct list));
//     newnode->data = data;
//     newnode->next = temp;
//     temp = newnode;
// }

void insert_value_middle(int data, int place)
{
    head = temp;
    int count = 1;

    while (head != NULL)
    {
        count++;

        if (count == place)
        {
            break;
        }
        head = head->next;
    }
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->data = data;
    newnode->next = head->next;
    head->next = newnode;
}

void print()
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
    cout << "Enter size: ";
    cin >> size;

    creat_list(size);
    insert_value_middle(9, 3);
    // insert_begin(1);
    // inset_end(5);
    print();
}