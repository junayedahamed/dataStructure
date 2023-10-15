#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
    struct list *prev;

} *head, *temp, *newnode, *h_pos, *prev_h; // here *h_pos  is for holding the head position

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
    head = h_pos;
    cout << "displaying from backward: " << endl;

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
void insert_mid(int pos, int val)
{
    h_pos = head; // holding head position using h_pos so that we could traverse from back
    head = temp;  // starting from beginning node temp
    for (int i = 1; i <= pos - 1; i++)
    {
        prev_h = head;     // prev_h holding head previous  position
        head = head->next; // pushing head forward
    }
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->data = val;    // newnode data entering
    prev_h->next = newnode; // previous head next connecting with newnode

    newnode->prev = prev_h; // newnode previous pointer connecting to previous head
    head->prev = newnode;   // head previous connecting to newnode
    newnode->next = head;   // newnode next connecting to head
}

int main()
{
    int size, val, pos;
    cout << "Enter size: ";
    cin >> size;
    creat_list(size);
    cout << "Enter value: ";
    cin >> val;
    cout << "enter position: ";
    cin >> pos;
    insert_mid(pos, val);

    display_backward();
    display_forward();
}