#include <iostream>
using namespace std;

class Employee 
{
private:
    string name;
    int age;
    double salary;
    int IdNumber;
public:
    void setEmployee(string n, int a, double s, int Id) {
        name = n;
        age = a;
        salary = s;	
        IdNumber= Id;
    }
    void displayEmployee() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
        cout << "Id:"<< IdNumber << endl;
    }
}; 

int main() {
    Employee emp1;
    emp1.setEmployee("Momin Nooh", 17, 10499,12345678);
    emp1.displayEmployee();
    return 0;
}

