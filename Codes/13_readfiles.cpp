#include <iostream>
#include <fstream>
using namespace std;

int main (){

    ifstream file("Archivo.txt");

    string line; // variable para guardar línea por línea del archivo

    while(getline(file,line)){ //función getline, para acceder a las líneas del archivo, se le mete la variable del archivo y la variable de la línea como parámetros
        cout<<line<<endl; // se tiene que usar un while loop para leer línea por línea del archivo
    }
    file.close(); // se cierra el archivo para que no haya conexión entre el arvhico y la memoria

    return 0;
}