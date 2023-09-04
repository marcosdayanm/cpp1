#include <iostream>
using namespace std;
/*
int main() {
int a = 10;
  do{
    cout<<a<<endl;
    a++;
  }
while(a<=15);
return 0;
}
*/


int main() {
  
  string password;
  do{
    cout<<"Enter your password: ";
    cin>>password;
  }
while(password!="hola");
  cout<<"Correct Password"; // se imprimirá una vez que la password sea correcta
  
return 0;
}