//find Min and Max element from an Array using less


#include<iostream>
using namespace std;


void minmax(int arr[],int size){

    int max = arr[0];
    int min = arr[0];
    int i = 0;
   for (int i = 0; i<size; i++){
   if(arr[i]>max){
       max = arr[i];
   }
   
   
  


   if(arr[i]<min){
       min =arr[i];
   }
   }

   cout<<"max :"<<max<<endl;
   cout<<"min :"<<min<<endl;

   
}


int main(){


int arr[] = {1,2,3,4,5,6,7,8,9};

int size = sizeof(arr)/sizeof(arr[0]);

minmax(arr,size);

}