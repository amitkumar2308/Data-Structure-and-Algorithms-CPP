#include<iostream>
#include<algorithm>
using namespace std;



void kthmin(int arr[],int size){
    cout<<"3rd minimum element of array is "<<arr[3]<<endl;
  
}


void kthmax(int arr[],int size){
    for(int i = 0; i<size/2; ++i){

        swap(arr[i],arr[size-1-i]);

    }
    cout<<"3rd Largest element of array is "<<arr[3]<<endl;
}

int main(){

    int arr[] = {11,12,1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

     std::sort(arr,arr+size);

     for(int i = 0; i<size; i++){
     
       cout<<arr[i];
     };

      
      cout<<endl;


     cout<<endl; 
     kthmin(arr,size);

     cout<<endl;
     kthmax(arr,size);
}

