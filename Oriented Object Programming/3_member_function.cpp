#include <iostream>
using namespace std;

class cars{
    public:
    string brand;
    int model;

void print();
};

void cars::print(){
    cout<<"The car's brand is: "<<brand<<endl;
    cout<<"The car's model is: "<<model<<endl;

}


int main(){

    cars obj1,obj2;
    cout<<"Enter the first car's brand: ";
    cin>>obj1.brand;
    cout<<"Enter the first car's model: ";
    cin>>obj1.model;

    obj1.print();

    obj2.brand = "Mazda";
    obj2.model = 2020;
    obj2.print();
    


    return 0;
}
