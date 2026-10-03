#include <iostream>
using namespace std;

class Number {
    int x;

public:
    // Constructor
    Number(int a) {
        x = a;
    }

    // Friend function for unary operator
    friend Number operator-(Number n);

    // Friend function for binary operator
    friend Number operator+(Number n1, Number n2);

    // Display function
    void display() {
        cout << "Value = " << x << endl;
    }
};

// Unary operator overloading
Number operator-(Number n) {
    return Number(-n.x);
}

// Binary operator overloading
Number operator+(Number n1, Number n2) {
    return Number(n1.x + n2.x);
}

int main() {
    Number n1(10);
    Number n2(20);

    // Unary operator
    Number n3 = -n1;

    cout << "Unary operator (-):" << endl;
    n3.display();

    // Binary operator
    Number n4 = n1 + n2;

    cout << "Binary operator (+):" << endl;
    n4.display();

    return 0;
}

