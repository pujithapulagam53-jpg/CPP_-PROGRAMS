#include <iostream>
using namespace std;

// First Base Class
class Student {
public:
    string name;
    
    void getName() {
        cout << "Enter student name: ";
        cin >> name;
    }
};

// Second Base Class
class Marks {
public:
    int m1, m2;

    void getMarks() {
        cout << "Enter marks in two subjects: ";
        cin >> m1 >> m2;
    }
};

// Derived Class
class Result : public Student, public Marks {
public:
    void display() {
        cout << "\nStudent Result" << endl;
        cout << "Name: " << name << endl;
        cout << "Subject 1: " << m1 << endl;
        cout << "Subject 2: " << m2 << endl;
        cout << "Total: " << m1 + m2 << endl;
    }
};

int main() {
    Result obj;

    obj.getName();
    obj.getMarks();
    obj.display();

    return 0;
}

