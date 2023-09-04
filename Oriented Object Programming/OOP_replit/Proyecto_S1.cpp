#include <iostream>
#include <fstream>
using namespace std;


class data{
public:
string name, password, username;
int id;
float balance, dollars;


void showbalance(){
cout<<endl<<"Your OOPcoin balance is: "<<balance<<endl;
cout<<endl<<"Your dollars balance is: $"<<dollars<<endl;
}


void buy(){
int amount;
while (true){
cout<<"You would need to pay $100 for 1 OOPCoin, how much would you like to buy?: ";
cin>>amount;
if (amount*100 > dollars){
cout<<"Insufficient funds, the amount you selected exceeds your dollars balance. Try again"<<endl<<endl;
  continue;
  }
  
  dollars=dollars-(amount*100);
  balance=balance+amount;
  showbalance();
  cout<<endl<<"Previous balance: "<<balance-amount<<endl;
  printr();
  saver();
  break;
}
}

void sell(){
  int amount;
  while (true){
  cout<<"You would get $80 for 1 OOPCoin, how much would you like to sell?: ";
  cin>>amount;
  if (amount>balance){
    cout<<"Insufficient funds, the amount you selected exceeds your OOPcoins balance. Try again"<<endl<<endl;
    continue;
  
  }
  
  dollars=dollars+(amount*80);
  balance=balance-amount;
  showbalance();
  cout<<endl<<"Previous balance: "<<balance+amount<<endl;
  printr();
  saver();
  break;
}
}

void pay(){ 
  int amount, option;

  cout<<"How do you want to pay? \n1. Dollars \n2. Cripto \nSelect the number: ";
  cin>>option;

if (option == 1){

      while (true){
  cout<<"What´s the amount you are paying: ";
  cin>>amount;
    if (amount>dollars){
     cout<<"Insufficient funds, the amount you selected exceeds your OOPcoins balance. Try again"<<endl<<endl; 
      continue;
    }
  
  dollars = dollars-amount; 
  showbalance();
  cout<<endl<<"Previous balance: "<<dollars+amount<<endl;
  printr();
  saver();
  break;
  }

  
}
  
  else if (option == 2){

    while (true){
  cout<<"What´s the amount you are paying: ";
  cin>>amount;
    if (amount>balance){
     cout<<"Insufficient funds, the amount you selected exceeds your OOPcoins balance. Try again"<<endl<<endl; 
      continue;
    }
  
  balance = balance-amount; 
  showbalance();
  cout<<endl<<"Previous balance: "<<balance+amount<<endl;
  printr();
  saver();
  break;
  }
    
  }
  
  
}

void printr(){
  cout<<"User account: "<<username<<endl;
  cout<<"User name: "<<name<<endl;
  cout<<"User id: "<<id<<endl;
  cout<<"Current user balance: "<<balance<<endl;
}

void saver(){
 ofstream rec("Receipt.txt");
  rec<<"User account: "<<username<<endl;
  rec<<"User name: "<<name<<endl;
  rec<<"User ID: "<<id<<endl;
  rec<<"User OOP Balance: "<<balance<<endl;
  rec<<"User dollars balance: "<<dollars<<endl;
  rec.close();
}
};


int main() {

string username [10]={"Eduardo02","MarDay","IsaacCocoa","Shapirin","GabrielOtto30","Spaceman22","DavMoh","Jose3312","Jony","Budi"};

string names [10] = {"Eduardo Mitrani","Marcos Dayan","Isaac Alarcon","Alex Fernandez","Gabriel Hernandez","Yoav Gutierrez","David Mizrahi","Jose Nissan","Jonathan Lozano", "Eduardo Abadi"};

int id [10]={17483, 19573, 57385, 73859, 47284, 74658, 83928, 73625, 05446, 63726};
  
string password [10] ={"12345","Password","Jardin","Comida","Planta","Horchata","Jamaica","Musica","Messi","Chicharito"};
  
float balance [10] = {217.8, 192.1, 136.4, 170.6, 315.82, 90.78, 208.65, 194.9, 218.5, 406.4};

float dollars [10] = {5748, 9221, 1532, 580, 7391, 6543, 3456, 11746, 3223, 1932};

int sizeuser = sizeof(username)/sizeof(username[0]);

string user, pass;
int userindex,passindex;
int entrance = 0;

while (true){

  cout<<"Enter your username: ";
  cin>>user;
  
  for(int i=0; i<sizeuser; i++){

  if (user != username[i]){
    continue;}
  
  else if (user == username[i]){
    userindex = i;
    cout<<"Enter your password: ";
    cin>>pass;
    if (pass != password[i]){
      cout<<"Incorrect password, try again"<<endl<<endl;
    }
    else if (pass == password[i]){
      cout<<endl<<"Welcome to your wallet, "<<names[userindex]<<endl;
      entrance = 1;
      break;}
    
    }
    
  else {
    cout<<"Incorrect username or password, try again"<<endl<<endl;
    }
 
  } // for 
if (entrance == 1){
  break;}

else{
  continue;}  
} // while


// declarar a los objetos
data client, ctransfer; //crear los objetos y declarar sus atributos
client.name = names[userindex];
client.username = username[userindex];
client.balance = balance[userindex];
client.dollars = dollars[userindex];
client.id = id[userindex];


  
// imprimir los datos del usuario que ingresó a su cuenta
cout<<"Username: "<<client.username<<endl;
cout<<"Account ID: "<<client.id<<endl;
cout<<"Criptocurrency Balance: "<<client.balance<<" OOPcoins"<<endl;
cout<<"US Dollars balance: $"<<client.dollars<<endl;




// Structure of the menu:  
while (true){
  
// Menu selection
int menu;
cout<<endl<<"Which operation would you like to perform? \n1. Show your balance \n2. Transfer OOPcoins to another account \n3. Buy OOPcoins \n4. Sell OOPcoins to dollars \n5. Pay a service with OOPcoins \n6. Log Out \nInput the number: ";
cin>>menu;

if (menu < 1 || menu > 6){
  cout<<endl<<"Incorrect option, must choose between 1 and 6, try again"<<endl;
  continue;} // del if 
  
else if (menu == 1){
  client.showbalance();
  continue;
}

else if (menu == 2){
  int idtransfer, transferindex, acomodacion;
  float amount;


while(true){

  acomodacion = 0;
    cout<<"Insert the ID of the account you would like to transfer: ";
  cin>>idtransfer;
  
  for (int i=0; i<10; i++){
    if (idtransfer != id[i]){
      continue;
    }
    
    else if (idtransfer == id[i]){
      transferindex = i;
      acomodacion = 1;
    }

    break;
  }

  if (acomodacion == 1){
    break;
  }
  
  }    

  
  while (true){
    cout<<"What´s the amount you would like to transfer: ";
    cin>>amount;
    
    if (client.balance < amount){
      cout<<endl<<"Transaction error, your balance is lower than the amount you want to transfer, try again"<<endl<<endl;
      continue;
    }
    cout<<endl<<"Previus balance: "<<client.balance<<endl;
    client.balance -= amount;
    balance[userindex] -= amount;
    client.printr();
    client.saver();
    cout<<endl<<"Previous balance of "<<names[transferindex]<<": "<<balance[transferindex]<<endl;
    
    balance[transferindex] += amount;

    cout<<"Current balance of "<<names[transferindex]<<": "<<balance[transferindex]<<endl;
    break;
  }

  continue;
}
  
else if (menu == 3){
  client.buy();
  continue;
}

else if (menu == 4){
  client.sell();
  continue;
}
  
else if (menu == 5){
  client.pay();
  continue;
}

else if (menu == 6){
  cout<<endl<<endl<<"Logging out";
  exit(0);
 
}
  
}

  return 0;
}