#include <iostream>
using namespace std;

class Student{
    public:
    int age;
    string name;
    string uni;
    int learn();

};


class Animal{
    public:
    //attributes
    string species;
    string name;
    int age;

    //methods
    void add_animal()
    {
        cout<<"Adding an animal"<<endl;
        cout<<"Enter family:";
        cin >> species;
        cout<<"Enter name:";
        cin >> name;
        cout<<"Enter age:";
        cin >> age;
        cout<<endl;
    }

    void display()
    {
        cout<<"Family: "<<species<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};


int main() {
    Student Wojtek;
    Wojtek.age = 18;
    Wojtek.name = "Wojtek";
    Wojtek.uni = "University of Wroclaw";
    cout << Wojtek.age << endl << Wojtek.name << endl << Wojtek.uni << endl;

    Animal cow;
    cow.add_animal();
    cow.display();


    return 0;
}
