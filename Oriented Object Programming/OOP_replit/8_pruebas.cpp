#include <iostream>
using namespace std;

/*
int c_to_f(){
  int num;
  num = 0;
    while(true){
        cout<<"How many conversions do you want to perform? ";
        cin>>num;
        if (num>=1){
            break;
        }
        cout<<"Number must be an integer greater than 0"<<endl<<endl;
    }

    float c[num] = {};
    float f[num] = {};

    float cvalue = 0, fvalue = 0;

    for (int i = 0; i<num; i++){
        
        cout<<"Insert a value in Celcius degrees: ";
        cin>>cvalue;
        c[i] = cvalue;
        fvalue = cvalue*9/5 +32;
        f[i] = fvalue;
    }

    for (int i = 0; i<num; i++){
        if (i == 0){
            cout<<endl<<"CELCIUS"<<"\t\t"<<"FARENHEIT"<<endl;
        }
        cout<<c[i]<<"\t\t"<<f[i]<<endl;
    }

return 0;
}
*/

int serie(){
    int a, d, n, suma=0;
    
    cout<<endl<<"Computing of the following serie: a + (a+1d) + (a+2d) + (a+(n-1)d)"<<endl;
    cout<<"Write the you want 'a' to have: ";
    cin>>a;
    cout<<"Write the you want 'd' to have: ";
    cin>>d;
    cout<<"Write the number of iterations you want the serie to have: ";
    cin>>n;

    for(int i = 0; i<n; i++){
        suma += a + i*d;
    }

cout<<endl<<"The result of the arithmetic serie is: "<<suma<<endl;
    return 0;
} 




int main(){


while(true){
    int call,task;

    cout<<endl<<"Menu:"<<endl;
    cout<<endl<<"1. Convert from Celcius to Farenheit "<<endl;
    cout<<"2. Execute arithmetic serie "<<endl;
    cout<<"3. Exit the program "<<endl<<endl;
    cout<<"Select the number of the task you want to perform (1/2/3): ";
    cin>>task;

switch(task){
    
    case 1:
    //call = c_to_f();
    break;

    case 2:
    call = serie();
    break;

    case 3:
    exit(0);

    default:
    cout<<endl<<"Invalid input, select between the options 1/2/3: "<<endl;
    break;



} // switch




} // while true
    return 0;
} // main



