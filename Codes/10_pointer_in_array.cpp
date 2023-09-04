#include <iostream>
using namespace std;

int main(){

    int arr[] = {2,5,6,7};
    int *ptr = arr;
    //cout<<*ptr<<endl;

    for (int i=0; i<4;i++){
        cout<<ptr[i]<<endl;
    }
    


    return 0;
}


