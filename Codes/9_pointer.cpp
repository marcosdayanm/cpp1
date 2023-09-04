#include <iostream>
using namespace std;

int main(){
    
    int x = 5;
    int *pointer;
    pointer = &x;

    cout<<"The reference given by the pointer of "<<x<<" is "<<pointer<<endl;
    cout<<"And the value that "<<pointer<<" stores is "<<*pointer<<endl;
    
    cout<<"This is the address of "<<x<<" given by the & before the variable, which is "<<&x;

    
    
    return 0;
}


