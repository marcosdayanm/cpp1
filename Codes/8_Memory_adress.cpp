#include <iostream>
using namespace std;


void cube(int &x){
    x = x*x*x;
}



/*
int main(){
    int x = 5;
    cout<<&x;

int & ref = x;

return 0;
}
*/

int main(){
    int number = 5;
    cube(number);
    cout<<number;
}



