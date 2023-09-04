#include <iostream>
using namespace std;

class person{
    private:
    string name;
    int age;


    public:
    void set_data(string n, int a){
        name = n;
        age = a;
    }

    void print(){
        cout<<name<<endl;
        cout<<age;
    }

};


int main(){

    person p1;
    string n;
    int a;

    cout<<"Type your name: ";
    cin>>n;
    cout<<"Type your age: ";
    cin>>a;

    p1.set_data(n,a);
    p1.print();


    return 0;
}



