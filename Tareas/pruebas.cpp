#include <iostream>
using namespace std;


int main() {

string nombres [10] = {"Eduardo","Marcos","Isaac","Alex","Gabriel","Yoav","David","Yosi","Jony", "Budi"};
  
int sizenames = sizeof(nombres)/sizeof(nombres[0]);
  
string password [10] ={"12345","Password","Jardin","Comida","Planta","Horchata","Jamaica","Musica","Messi","Chicharito"};
  
float balance [10] = {10.3, 2.1, 6.4, 0.6, 3.6, 1, 2.65, 4.9, 8.5, 4.4};

string user, pass;
  
while (true){

  cout<<"Enter your usermane: ";
  cin>>user;
  
  for(int i=0; i<sizenames; i++){
 
  if (user == nombres[i]){
    cout<<"Enter your password: "<<endl;
    break;
  }
    
  }

}

  
  cin>>pass;
  
  return 0;
}