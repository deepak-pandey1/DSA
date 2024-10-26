// -->class memmber by default private
// -->empty class occupy by default 1 byte because, compiler gives smallest adressable space is 1 byte
// -->string is also class, contain many atribute and method
// -->padding = is multiple of large datatype minus(-) other data type
// -->constructor is used to assign value and those fun dont need to declare datatype. generally 3 types of constructor, and automatically call when class instance is declare
// -->constructor assign garbage value to default constructur & assign value according to parameterise constructor
// -->if we do not assign value and not make any type of constructor so, by default compiler add default constuctor
// -->constructor automatically call when object is creayed

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student           //declare class name usually fisrt letter in capital
{
private:
    string gf;

public:
    int id;
    int age;
    bool present;
    string name;
    int nos;
    int *v;

    // ctor: Default ctor: assigns garbage value
    // no khokhla student
    Student()
    {
        cout << "Student ctor called" << endl;
    }

    // paremeterized ctor
    Student(int id, int age, bool present, string name, int nos, string gf)
    {
        this->id = id;                             //this pointer is point to class variable
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
        this->v = new int(10);
        cout << "Student paremeterized ctor called" << endl;
    }

    Student(int id, int age, bool present, string name, int nos)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        cout << "Student paremeterized ctor w/o gf called" << endl;
    }

    void study()
    {
        cout << "studying" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
    void bunk()
    {
        cout << "bunking" << endl;
    }

private:
    void gfchatting()
    {
        cout << "Chatting" << endl;
    }

    void cheating()
    {
        cout << "Cheating" << endl;
    }
};

int main()
{
    cout << sizeof(Student) << endl;
    Student s1;

    Student s2(1, 12, 1, "Chota Bheem", 1, "Chutki");
    cout << s2.name << endl;
    cout << s2.id << endl;

    Student s3(2, 15, 0, "Lokesh", 5);
    cout << s3.name << endl;

    // alocating on heap                                                                    //if we want to declare class on heap so this method
    Student *s4 = new Student(3, 34, 1, "Chintu", 6);
    cout << s4->name << endl;
    cout << (*s4).name << endl;

    // delete s4; // no LEAK

    // s1.name = "Goli";
    // s1.age = 12;
    // s1.id = 1;
    // s1.nos = 5;
    // s1.present = 1;

    // Student s2;
    // s2.name = "Chota Bheem";
    // s2.age = 11;
    // s2.id = 2;
    // s2.nos = 1;
    // s2.present = 0;

    return 0;
}
