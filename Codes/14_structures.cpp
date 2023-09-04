#include <iostream>
#include <fstream>
using namespace std;

struct employee{
string name;
int id;
float salary;

};

int main (){
employee emp;
    emp.name = "Jim";
    emp.id = 101;
    emp.salary = 32000.5;

    cout<<"The employee's name is: "<<emp.name<<endl,
    cout<<"The ID is: "<<emp.id<<endl;
    cout<<"The salary is: "<<emp.id<<endl;


    return 0;
}