// Classes and Objects demonstration in C++
// Object is uniquie entity that keeps data and functions together in a group.
// Class is group of objects.
#include <iostream>
using namespace std;
class Employee
{
public:
    // properties
    string Name, Company;
    int Age;
    void displaydetail() // defining function
    {
        cout << "Name: " << Name << "\n";
        cout << "Company: " << Company << "\n";
        cout << "Age: " << Age << "\n";
    }
};
int main()
{

    Employee employee1; // objects
    // declaring function
    employee1.Name = "Nitin Singh";
    employee1.Company = "Defence Resarch and Development Organization";
    employee1.Age = 18;
    employee1.displaydetail(); // calling  or invoking function
    Employee employee2;
    employee2.Name = "Muskaan Gauba";
    employee2.Company = "Adobe";
    employee2.Age = 19;
    employee2.displaydetail();
}