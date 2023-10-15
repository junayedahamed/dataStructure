// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// typedef struct node myNode;
// myNode *head;
// void createList(int n)
// {
//     myNode *newNode, *temp;
//     head = (struct node *)malloc(sizeof(myNode));
//     printf("Enter the value of node 1: ");
//     scanf("%d", &head->data);
//     head->next = NULL;
//     temp = head;
//     for (int i = 1; i < n; i++)
//     {
//         newNode = (struct node *)malloc(sizeof(myNode));
//         printf("Enter the value of node %d : ", i + 1);
//         scanf("%d", &newNode->data);
//         newNode->next = NULL;
//         temp->next = newNode;
//         temp = newNode;
//     }
// }
// void display()
// {
//     struct node *temp;
//     temp = head;
//     printf("Display List: \n");
//     for (int i = 1; temp != NULL; i++)
//     {
//         printf("Value-%d = %d\n", i, temp->data);
//         temp = temp->next;
//     }
// }
// void InsertMid(int position)
// {
//     struct node *newnode, *temp;
//     temp = head;
//     for (int i = 1; i < position - 1; i++)
//     {
//         temp = temp->next;
//     }
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the value you want to insert at %d no position :\n", position);
//     scanf("%d", &newnode->data);
//     newnode->next = temp->next;
//     temp->next = newnode;
// }
// int main()
// {

//     int n;
//     printf("Enter Number of elements in the List: ");
//     scanf("%d", &n);

//     createList(n);
//     printf("\n");
//     int position;
//     printf("where do you want to create a newnode:");
//     scanf("%d", &position);
//     InsertMid(position);
//     display();
//     printf("\n");
//     return 0;
// }
