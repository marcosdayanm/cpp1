#include <iostream>
using namespace std;

int main(){
/*
int x[3] = {1,2,3}; //array
cout<<x[2]<<endl;
for(int i = 0;i<7;i++){
    cout<<x[i]<<endl;
}

int size = sizeof(x); // sizeof() es una función para saber el tamaño que ocupa en la memoria una variable
cout<<"The size of x is: "<<size<<endl;

int len = sizeof(x)/sizeof(x[0]);
cout<<"The lenght of x is: "<<len<<endl;

string y[] = {"aa","bb","cc"};
cout<<y[1]<<endl;
*/


int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // imprimir lista de listas
for (int i = 0;i<3;i++){
    cout<<endl;
    int suma;
    for(int j = 0;j<3;j++){
        if (arr[i][j] % 2 == 0){
            suma += arr[i][j];
        }

        cout<<arr[i][j]<<"\t";
        
    }
    cout<<suma;
}

    return 0;
}
