#include <iostream>
#include <fstream>
using namespace std;


class employee {
    private:
    string name;
    float salary;
    int id,hours;


    public:
    void set_data(){
        cout<<"Type your name: ";
        cin>>name;
        cout<<"Enter your id: ";
        cin>>id;
        cout<<"Enter your Salary per hour: ";
        cin>>salary;
        cout<<"Enter the hours you worked this week: ";
        cin>>hours;
    }

    float bonus(){
        return (hours-40)*500;
    }

    void print(float b){
        cout<<"The employee's name is: "<<name<<endl;
        cout<<"The employee's ID is: "<<id<<endl;
        cout<<"The employee's salary per week is: $"<<hours*salary<<endl;
        cout<<"The employee's bonus is: $"<<b<<endl;
    }

    void create_file (float b){
        ofstream file("Employee.txt");
        file<<"The employee's name is: "<<name<<endl;
        file<<"The employee's ID is: "<<id<<endl;
        file<<"The employee's salary per week is: $"<<hours*salary<<endl;
        file<<"The employee's bonus is: $"<<b<<endl;
        file.close();


    }

};


int main (){
    employee emp,emp2;
    emp.set_data();
    float bonus = emp.bonus();
    emp.print(bonus);
    emp.create_file(bonus);


/*
    emp2.set_data();
    float b = emp2.bonus();
    emp2.print(b);
*/

    return 0;
}


