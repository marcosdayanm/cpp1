#include <iostream>
using namespace std;


int suma (int *ptr, int size){
    int s = 0;
    for (int i=0; i<size; i++){
        s += ptr[i];
    }
    return s;
}




int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<suma(arr,10);

    return 0;
}