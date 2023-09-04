#include <iostream>
#include <fstream>
using namespace std;

int main (){

    ofstream file ("Archivo.txt");

    file<<"Hola q pedo";
    file.close();

    return 0;
}


