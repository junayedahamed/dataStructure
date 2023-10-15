#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void creat_list(int n)
{
    struct node *new_node, *temp;

    head = (struct node *)malloc(sizeof(struct node)); // memory allocating for first node

    cout << "enter value of first node : ";
    cin >> head->data;
    head->next = NULL;

    temp = head; // temp storing the value of head or startng value

    for (int i = 1; i < n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node)); // allocating memory for new node

        cout << "enter the value of new node" << i << ":";

        cin >> new_node->data; // taking data input in new node

        new_node->next = NULL; // taking new node adress null

        temp->next = new_node; //  temp taking the adress of  new node again and again

        temp = new_node;
    }
}
// enter value in begin

void Insert_begin()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node)); // taking new memory for new node
    cout << endl;
    cout << "Enter value that want to insert in first: ";
    cin >> newnode->data; // enter data in newnode
    newnode->next = head; // newnode next indicating head

    head = newnode; // now head pointer in newnode
}

// add newnode at the end

void Insert_End()
{
    struct node *newnode, *temp;
    temp = head;
    while (temp->next != NULL)
    { // stoping loop before next node *next value is  NULL

        temp = temp->next;
    }
    newnode = (struct node *)malloc(sizeof(struct node)); // taking new memory for new node
    cout << endl;
    cout << "Enter value that want to insert in End: ";
    cin >> newnode->data; // enter data in newnode
    newnode->next = NULL; // making newnode pointer NULL
    temp->next = newnode; // adressing temp next to newnode pointer
}

// insert newnode in MID
void Insert_mid(int position)
{
    struct node *newnode, *temp;
    temp = head;

    for (int i = 1; i < position - 1; i++)
    { // going to before position of position

        temp = temp->next;
    }
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << endl;
    cout << "Enter data: ";
    cin >> newnode->data;
    newnode->next = temp->next; // newnode indicating temp -> next
    temp->next = newnode;       // now the temp indicating newnode //before it was indicating temp ->next
}
// deleting data from end first
void delete_INFO_from_begin()
{
    struct node *newnode, *temp;
    temp = head;       // storing the head value on the temp value
    head = head->next; // passing head to the next node as a head pointer
    free(temp);        // clearing temp value
}

// deleting data from end node

void delete_INFO_from_End()
{
    struct node *newnode, *temp, *prev;
    temp = head;

    while (temp->next != NULL)
    {
        prev = temp;       // storing previous value address for setting up NULL
        temp = temp->next; // it's going till temp=>next id not NULL
    }
    prev->next = NULL; // making previous value next=NULL
    free(temp);        // making temp value free
}

// deleting value in mid position
void delete_INFO_from_Mid(int position)
{
    struct node *newnode, *temp, *prev;

    temp = head;
    for (int i = 1; i < position; i++)
    {
        prev = temp;       // storing previous value on prev;
        temp = temp->next; // alawys going to next by using tem->next
    }

    prev->next = temp; // prev adressing temp
    free(temp);        // free up the temp
}

void display()
{
    struct node *temp;
    int count = 1;
    temp = head; // starting from first node
    cout << "displaying node" << endl;
    while (temp != NULL)
    {
        cout << endl
             << count++ << " node :";
        cout << temp->data;
        temp = temp->next;
    }
}

int main()
{
    int n, position;
    cout << "number of element in the list : ";
    cin >> n;
    creat_list(n);
    display();
    Insert_End();
    display();
    cout << endl;
    cout << "Enter where do you want to create newnode: ";
    cin >> position;
    Insert_mid(position);
    display();
    cout << "Delete from begin:" << endl;
    delete_INFO_from_begin();
    cout << "Delete from End" << endl;
    delete_INFO_from_End();
    int po;
    cout << "Enter  position of value which do you want to del:";
    delete_INFO_from_Mid(po);
    display();
}