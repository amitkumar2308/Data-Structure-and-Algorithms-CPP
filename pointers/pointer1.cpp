#include<iostream>
using namespace std;

int main(){

    int x = 6;

    int *p = &x;

   

    

    cout<<*p<<endl;  //star indicates value inside pointer address --> 6
    cout<<p<<endl;   //p indicates address of x --> 0x61ff08

     cout<<"size of value is "<<sizeof(*p)<<endl ;//value size --> 4byte
     cout<<"size of pointer is "<<sizeof(p); //pointer size --> 8byte
} 