#include <iostream>
using namespace std;

class Number {
    int x;

public:
    // Constructor
    Number(int a) {
        x = a;
    }

    // Unary operator overloading
    Number operator-() {
        return Number(-x);
    }

    // Binary operator overloading
    Number operator+(Number n) {
        return Number(x + n.x);
    }

    // Display function
    void display() {
        cout << "Value = " << x << endl;
    }
};

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


