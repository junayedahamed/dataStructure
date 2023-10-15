#include<iostream>
using namespace std;

struct student
{
    string name, id;
    int roll, age;
};

struct smartphone{
    int value;
    string model, name;
    int storage;

};

    

int main(){

    student s1, s2;
    s1.name = "junayed";
    s1.age = 22;
    s1.id = "221-15-5395";
    s1.roll = 12;

    smartphone sm1;
    sm1.model = " 14 Pro  max";
    sm1.name = "I phone ";
    sm1.value = 1000000;
    sm1.storage = 128;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.id << endl;
    cout << s1.roll << endl;
}