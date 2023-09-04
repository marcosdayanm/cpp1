# include <iostream>
using namespace std;

int main(){

int suma = 0;
for (int i = 0;i<101;i+=2){
cout<<i<<endl;
suma += i;

if (i==100){
cout<<suma;
}

}

return 0;
}