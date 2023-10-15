#include<iostream>
using namespace std;

struct smartphone{
    string name;
    int storage;
    string color;
    float price;
};
struct car{
    string name;
    float price;
    string color;
};

struct person{
    string name;
    int age;
    smartphone Smartphone;
    car Car; // this atribute taking input from smartphone struct and showing  person which smartphone does he use;
};

void print_smartphone_info(smartphone Smartphone){
    cout << "name of phn : " << Smartphone.name << endl;
    cout << "color of phn: " << Smartphone.color << endl;
    cout << "storage: " << Smartphone.storage << endl;
    cout << "price: " << Smartphone.price << endl;
}
void print_car_info(car Car){
    cout << "name of car: " << Car.name << endl;
     cout << "color of car: " << Car.color << endl;
      cout << "price of car: " << Car.price << endl;
}

void print_person_info(person p){
    cout << "name: " << p.name << endl
         << "age: " << p.age << endl;
    print_smartphone_info(p.Smartphone);
    print_car_info(p.Car);
}

int main(){

    smartphone smphn1,smphn2;
    smphn1.name = "I phone";
    smphn1.storage = 64;
    smphn1.color = "Black";
    smphn1.price = 999.99;

    smphn2.name = "smasung galaxy s21 ultra";
    smphn2.color = "green";
    smphn2.storage = 128;
    smphn2.price = 888.88;

      //car struct

    car cr;
    cr.name = "BMW";
    cr.color = "Black";
    cr.price = 1000000.00;

    //person struct 
    person p;
    p.name = "junayed";
    p.age = 20;
    p.Smartphone = smphn2;
    p.Car=cr;

      // print_smartphone_info(smphn1);
    // print_smartphone_info(smphn2);
    print_person_info(p);

    return 0;
}