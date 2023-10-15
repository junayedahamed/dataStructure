#include<iostream>
using namespace std;
struct student
{
    string name;
    int age;
    float result;
    struct student *next ;
};

int main(){
    student *s1, *s2, *s3;
    s1=(struct student*) malloc(sizeof(struct student));
    s2 = (struct student *)malloc(sizeof(struct student));
    s3 = (struct student *)malloc(sizeof(struct student));
   student *head = NULL;

    // input    name
    s1->name = "junayed";
    s2->name = "susanto";
    s3->name = "murad";
    // input age
    s1->age = 20;
    s2->age = 22;
    s3->age = 23;

    // input result
    s1->result = 3.25;
    s2->result = 3.00;
    s3->result = 2.50;
    // locationg
    head = s1;
    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;
    while (head != NULL)
    {
        cout << head->name << "\n"
             << head->age << "\n"
             << head->result<<endl;
        head = head->next;
     }
}