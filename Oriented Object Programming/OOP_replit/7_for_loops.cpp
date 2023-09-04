#include <iostream>
using namespace std;

/*
int main() { //factorial
  int fact = 1;
  int num;
  cout<<"Enter the factorial: ";
  cin>>num;
  
  for(num;num>0;num--){
    fact *= num;
  }
  
  cout<<fact;

  return 0;
}
*/

int main() { //exponente

  int num,exp;
  long int fin = 1;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<"Enter the exponent: ";
  cin>>exp;

  for(int i = exp;i > 0;i--){
    fin *=num;
  }
    cout<<fin;
  return 0;
}




