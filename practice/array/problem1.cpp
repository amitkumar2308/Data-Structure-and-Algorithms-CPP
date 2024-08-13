//reversing an array integer


#include<iostream>
using namespace std;

void reversearr(int arr[],int len){
    for (int i = 0; i<len/2; ++i){
        swap(arr[i] , arr[len-1-i]);
    }

  
}

int main(){

    int arr[] ={1,2,3,4,5,6,7};

    int len = sizeof(arr)/sizeof(arr[0]);
    
    reversearr(arr,len);

    for(int i=0; i<len; ++i){
        cout<<arr[i];
    }

    return 0;
}