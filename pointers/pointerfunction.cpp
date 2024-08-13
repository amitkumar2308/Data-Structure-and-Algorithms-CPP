#include<iostream>

using namespace std;    


void print(int *p){
    cout<<*p<<endl;
}


void update(int *p){
   //FIXME -  p = p+1; -----> Is prakar se update hoga hi nhi

    *p = *p+1;  //-------> this is correct way to update
}


void getSum (int arr[] , int size){
    //REVIEW - <<"size of array is "<<sizeof(arr)<<endl;  //TODO - to yha par kya hua jo humne niche wala array yha pass kiya wo actuallly me uska pointer bnkr paas ho rha that why iska size 4bit bta rha jo ki pointer size hai according to mingw32bit or 64 bit me 8 bytes hota hai

    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    cout<<"sum of array is:"<<sum<<endl;
    cout<<arr<<endl;  //TODO - yha par jo pointer hai uska address print hoga
}




int main(){

int value =  6;

int *p = &value;
 

 //print(p);
cout<<"Before update value of p :"<<*p<<endl;
 update(p);
 cout<<"After update the value of p :"<<*p<<endl;


 int arr[6] = {1,2,3,4,5,6};

 cout<<"Sum of array is" ;
 //getSum(arr,6); 
 getSum(arr,4);   //TODO - yha par is trah se hum slicing matlab particular part bhi pass kar sakte hai array ka


 return 0;

}