// front for (delelte) and rare for (insert)
// define front as -1 and rare as -1
#include <iostream>
using namespace std;

int front = -1, rare = -1;

void en_qeue(int qeue[], int size)
{
    int val;
    cout << "Enter value: ";
    cin >> val;
    if (rare == size - 1)
    {
        cout << "Qeue is Full" << endl;
    }
    else
    {
        if (front == -1)
        {
            front++;
        }
        rare++;
        qeue[rare] = val;
    }
}

void de_qeue(int qeue[])
{
    if (front == -1 && rare == -1)
    {
        cout << "Qeue is empty" << endl;
    }
    else
    {
        cout << "Deleted value:" << qeue[front] << endl;
        front++;
        if (front > rare)
        {
            front = -1;
            rare = -1;
        }
    }
}

void display(int qeue[])
{
    cout << "Displaying qeue: " << endl;
    for (int i = front; i <= rare && i != -1; i++)
    {

        cout << qeue[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size = 0, choice = 0;
    cout << "Enter size: ";
    cin >> size;
    int qeue[size];
    while (choice != 4)
    {
        cout << "Enter choice 1 to enqeue: " << endl;
        cout << "enter choice 2 to deQeue: " << endl;
        cout << "enter choice 3 to diplay: " << endl;
        cout << "enter choice 4 to exit: " << endl;

        cout << "Enter choise: ";
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            en_qeue(qeue, size);
            break;

        case 2:
            de_qeue(qeue);

            break;

        case 3:
            display(qeue);
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
