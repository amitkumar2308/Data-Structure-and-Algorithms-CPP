#include<iostream> 
using namespace std;




void reversearr(int arr[],int size){
    for(int i=0; i<size/2; ++i){
        swap(arr[i] , arr[size-1-i]);

        
    }
}
int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(arr)/sizeof(arr[0]);


    reversearr(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i];
    }

    return 0;
}