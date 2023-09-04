#include <iostream>
using namespace std;

int main() {

  int x;
  int y;
  int z;
  cout<<"Enter first number: ";
  cin>>x;
  cout<<"Enter second number: ";
  cin>>y;
  cout<<"Enter third number: ";
  cin>>z;

  if ((x<y) && (x<z)){
    cout<<x;
    if (y<z){
      cout<<y;
      cout<<z;
    }
    else{
      cout<<z;
      cout<<y;
      }
    }
    
  else if ((y<x) && (y<z)){
    cout<<y;
    if (x<z){
      cout<<x;
      cout<<z;
    }
    else{
      cout<<z;
      cout<<x;
    }
    }
  else{
    cout<<z;
    if (x<y){
      cout<<x;
      cout<<y;
    }
    else{
      cout<<y;
      cout<<x;
    }
  }

return 0;
}

