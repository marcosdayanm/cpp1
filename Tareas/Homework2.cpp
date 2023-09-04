#include <iostream>
using namespace std;

int even_numbers(int *p_arr, int s_arr){
    int suma = 0;
    for (int i=0; i<s_arr; i++){
        if(p_arr[i]%2 == 0){
            suma += p_arr[i];
        }
    }
    return suma;
}


int biggest_number(int *p_arr, int s_arr){
    int biggest;
    for (int i=0; i<s_arr; i++){
        if (i == 0){
            biggest = p_arr[i];
        }
        if (biggest < p_arr[i]){
            biggest = p_arr[i];
        }
    }
    return biggest;
}

int primenumber (int *p_arr, int s_arr){
    int s_primos = 4;
    int primos[s_primos];
    int index = 0;

    for (int i=0; i<s_arr; i++){
        
        if (p_arr[i] == 1){
            continue;
        }
        else if (p_arr[i] == 2 or p_arr[i] == 3 or p_arr[i] == 5 or p_arr[i] == 7){
            primos[index] = p_arr[i];
            index++;
        }
        else if (p_arr[i]%2!=0 and p_arr[i]%3!=0 and p_arr[i]%5!=0 and p_arr[i]%7!=0){
            primos[index] = p_arr[i];
            index++;
        }
    }

    for (int a=0; a<s_primos; a++){
        if (a==0){
            cout<<"The prime numbers on the array are: ";
        }
        
        if (a==s_primos-1){
            cout<<primos[a];
        }
        else{
        cout<<primos[a]<<", ";
        }
    }

    return 0;
}




int main (){

    int s_arr = 10, *p_s_arr = &s_arr;
    int arr[s_arr] = {2,4,3,6,5,9,10,20,23,8}, *p_arr = arr;
    
    int evensum = even_numbers(arr,10);
    cout<<endl<<"The sum of the even numbers on the array is: "<<evensum<<endl<<endl;

    int bign = biggest_number(arr, 10);
    cout<<"The biggest number on the array is: "<<bign<<endl<<endl;

    int call = primenumber (p_arr, s_arr);
    return 0;
}

