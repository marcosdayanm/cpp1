#include <iostream>
using namespace std;

int main(){
/*
    int age;
    //make input
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Your age is: "<<age<<endl;

  int x;
  cout<<"Enter x value: ";
  cin>>x;
  x>=10? cout<<"x is greater than 10":cout<<"x is smaller than 10";
 


float pi = 3.14159;
  pi = 5;
  cout<<pi;
*/

int time;
  cout<<"Enter the time in 24h format: ";
  cin>>time;
  if (time<12){
    cout<<"Good Morning";
  }
  else if ((time>=12) && (time<19)){
    cout<<"Good Day";
  }
  else{
    cout<<"Good Night";
  }
    


  
return 0;
}

