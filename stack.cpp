#include <iostream>
#include <stdlib.h>
using namespace std;
int top = -1;

void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        top--;
    }
}
void push(int stack[], int n)
{
    int val;
    top++;
    if (top == n)
    {

        cout << "Stack is full" << endl;
        top--;
    }

    else
    {
        cout << "Enter value: ";
        cin >> val;
        stack[top] = val;
    }
}
void display(int stack[])
{
    while (true)
    {
        cout << stack[top] << " ";
        top--;
        if (top == -1)
        {
            break;
        }
    }
}

int main()
{
    int n, choice = 0;
    cout << "Enter size of stack: ";
    cin >> n;
    int stack[n];
    while (choice != 4)
    {
        cout << "Enter choice 1 to push: " << endl;
        cout << "enter chose 2 to pop: " << endl;
        cout << "enter choise 3 to diplay: " << endl;
        cout << "enter choise 4 to exit: " << endl;

        cout << "Enter choise: ";
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            push(stack, n);
            break;

        case 2:
            pop();

            break;

        case 3:
            display(stack);
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "enter valid choice" << endl;
            system("cls");
        }
    }
}
