//Hybrid Inheritance
#include<iostream>
using namespace std;
class Person{
	public:
		void speak(){
			cout<<"Person speaks."<<endl;
		}
};
class Student : public Person{
public:
	void study(){
		 cout << "Student is studying." << endl; 
    } 
}; 
class Employee { 
public: 
    void work() { 
        cout << "Employee is working." << endl; 
    } 
}; 
class WorkingStudent : public Student, public Employee {  
 //Hybrid (Student from , Person + Employee)
public: 
    void balance() { 
        cout << "Working student balances work and study." << endl;
 }
};
int main()
{
 cout << "\n=== Hybrid Inheritance ===" << endl; 
    WorkingStudent ws; 
    ws.speak(); 
    ws.study(); 
    ws.work(); 
    ws.balance(); 
    return 0; 
} 


