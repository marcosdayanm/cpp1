#include <iostream>
using namespace std;

class math{ // declarar la clase
public:
int x; // los atributos de la clase
int y;
int r;

int suma(){ // método, que es la función dentro de la clase
cout<<x+y<<endl;
return x+y; // lo que se regresa del method
}
};

int main (){
int r; 
math objeto; // se crea el objeto llamado objeto en la clase math
objeto.x = 5; // se le pone un valor al atributo x del objeto
objeto.y = 30;
r = objeto.suma(); // se ejecuta la función con los atributos declarados en el objeto y se guarda en variable r
cout<<"Este es el print de el return: "<<r;

return 0;
}


