#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
};
struct list *head, *temp, *p;

void push(int data)
{

    temp = (struct list *)malloc(sizeof(struct list));
    if (head == NULL)
    {

        temp->data = data;
        temp->next = NULL;
        head = temp;
    }
    else
    {
        temp->data = data;
        temp->next = head;
        head = temp;
    }
}

void pop()
{
    if (head == NULL)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        p = head;
        head = temp;
        free(p);
    }
}

int main()
{
}