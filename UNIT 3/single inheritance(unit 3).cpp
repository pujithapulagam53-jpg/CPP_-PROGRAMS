#include <iostream>
using namespace std;
// Base class
class Student {
public:
    string name;
    int rollNo;

    void getStudent() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};
// Derived class
class Marks : public Student {
public:
    int m1, m2;

    void getMarks() {
        cout << "Enter marks in two subjects: ";
        cin >> m1 >> m2;
    }

    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << m1 << " " << m2 << endl;
        cout << "Total: " << m1 + m2 << endl;
    }
};
int main() {
    Marks obj;

    obj.getStudent();
    obj.getMarks();
    obj.display();

    return 0;
}

