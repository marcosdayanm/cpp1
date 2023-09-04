#include <iostream>
#include <fstream>
using namespace std;

int main (){
    string name;
    cout<<"Type your name: ";
    cin>>name;

    float c1,c2,c3,av;

    cout<<"Enter the first mark: ";
    cin>>c1;
    cout<<"Enter the second mark: ";
    cin>>c2;
    cout<<"Enter the third mark: ";
    cin>>c3;

    av = (c1+c2+c3)/3;

    ofstream f("Student.txt");
    f<<"Student name: "<<name<<endl;
    f<<"Mark 1: "<<c1<<endl;
    f<<"Mark 2: "<<c2<<endl;
    f<<"Mark 3: "<<c3<<endl;
    f<<"The average is: "<<av<<endl;
    f.close();

    return 0;
}