#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
    struct list *prev;
} *head, *temp, *newnode, *h_pos;

void creat_list(int size)
{
    temp = (struct list *)malloc(sizeof(struct list));
    printf("enter value 1: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;

    for (int i = 2; i <= size; i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        printf("enter data %d :", i);
        scanf("%d", &newnode->data);
        newnode->prev = head; // connecting newnode previous with head
        head->next = newnode; // connecting head next to the new node
        newnode->next = NULL; // newnode next making null
        head = newnode;
    }
}

void display()
{
    printf("\ntraversing forward: \n");

    head = temp;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insert_at_mid(int pos, int val)
{
    h_pos = head; // here we holding the head last position which is important for backward traverse
    head = temp;
    for (int i = 1; i < pos - 1; i++)
    {
        head = head->next;
    }
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->data = val;

    newnode->prev = head;       // connecting newnode with head
    head->next->prev = newnode; // connecting head next node previous pointer to the newnode
    newnode->next = head->next; // connecting newnode next,to the next node of head (that means head->next)
    head->next = newnode;       // connecting to the next node of head, with newnode
}

void display2()
{

    printf("\ntraversing backward: \n");
    head = h_pos;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->prev;
    }
}

int main()
{
    int s, pos, val;
    printf("Enter size of list: ");

    scanf("%d", &s);

    creat_list(s);
    printf("Enter position where do you insert value: ");
    scanf("%d", &pos);
    printf("Enter value which do you want to insert: ");
    scanf("%d", &val);
    insert_at_mid(pos, val);

    display();
    display2();
}