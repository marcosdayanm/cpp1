#include <iostream>
using namespace std;

class student { //crear template
public:
string name; // atributos del template
int id;
float grade;


void show (){  // method del template
    cout<<name<<endl;
    cout<<id<<endl;
    cout<<grade<<endl;
}
};


int main (){

    student obj1; // creamos objeto 1 en el template "student"

    cout<<"Type your name: "; // definimos los atributos de objeto 1 con inputs
    cin>>obj1.name;
    cout<<"ENter your ID: ";
    cin>>obj1.id;
    cout<<"Enter your grade: ";
    cin>>obj1.grade;
    
    obj1.show(); // se llama al method con el objeto 1

    return 0;
}







