#include<iostream>
using namespace std;

int main(){

    int num = 20;

    int a = num;              //here there is no change in num when we do a++ because it update value of a not num..
     a++;
    int *ptr = &num;


    

    (*ptr)--;
       

    cout<<num<<endl;
    cout<<*ptr<<endl;
    cout<<a<<endl;


    //important concept
    int i = 4;
    int *t = &i;
    //cout<<*t++<<endl;
   *t = *t+1;
   cout<<*t<<endl;

   cout<<"before t"<<t<<endl;
   t=t+1;
   cout<<"after t"<<t<<endl;   //before t0x61fefc       -----> after t0x61ff00 (increase by 4 bytes) bcz one integer take 4 bytes if it is on adress 100 then it will move to 104
 
}