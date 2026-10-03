class Shape { 
public: 
    void draw() { 
        cout << "Drawing a shape." << endl; 
    } 
}; 
class Circle : public Shape { 
public: 
    void area() { 
        cout << "Area of Circle = pr²" << endl; 
    } 
}; 
class Square : public Shape { 
public: 
    void area() { 
        cout << "Area of Square = a²" << endl;
    }
}; 
 cout << "\n=== Hierarchical Inheritance ===" << endl; 
    Circle c; 
    Square s; 
    c.draw(); 
    c.area(); 
    s.draw();
    s.area();
