#include <iostream>
using namespace std;

class calculator{

    public:
    float x,y;


    float sum(){
        return x+y;
    }

    float sub(){
        return x-y;
    }

    float mult(){
        return x*y;
    }

    float quot(){
        return x/y;
    }

};



int main(){

    calculator op1,op2;

    op1.x = 20;
    op1.y = 5;

    cout<<op1.sum()<<endl;
    cout<<op1.sub()<<endl;
    cout<<op1.mult()<<endl;
    cout<<op1.quot()<<endl;

    return 0;
}


