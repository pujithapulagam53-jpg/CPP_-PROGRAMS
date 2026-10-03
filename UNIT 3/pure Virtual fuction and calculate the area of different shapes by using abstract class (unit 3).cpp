#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class - Circle
class Circle : public Shape
{
    float r;

public:
    Circle(float radius)
    {
        r = radius;
    }

    void area()
    {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape
{
    float l, b;

public:
    Rectangle(float length, float breadth)
    {
        l = length;
        b = breadth;
    }

    void area()
    {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

// Derived class - Triangle
class Triangle : public Shape
{
    float b, h;

public:
    Triangle(float base, float height)
    {
        b = base;
        h = height;
    }

    void area()
    {
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 5);
    Triangle t(8, 6);

    c.area();
    r.area();
    t.area();

    return 0;
}
