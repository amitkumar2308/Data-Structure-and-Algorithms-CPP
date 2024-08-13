#include<iostream>
using namespace std;

int main(){


    int first = 10;
    int second = 20;

    int *ptr = &first;  
    int *ptr2 = &second;
    *ptr= 24;   //REVIEW - yaha par samjho hum pointer se value update kar sakte hain but addrees update nahi kar sakte
     
     *ptr++;  //FIXME - we can not increase value by this method 
     (*ptr)++; //FIXME - we can increase value by this
    cout<<first<<" "<<second<<endl;

    return 0;


    //REVIEW - good qostion

    // int arr[] ={10,20,30,40,50};
    // int *ptr = arr++;   //FIXME - ye jo error throw kareg kyu?? kyunki jab array ko ++ kroge to tum indeirectly symbol table me change kr rahe ho which is not possible
    // cout<< *ptr<<endl;


    //REVIEW - QUESTION 3

    // char ch = 'a';
    // char* ptr = &ch;
    // ch++;     //TODO - this will increease a--> b 
    // cout<< *ptr <<endl; //TODO - here it return b 

    return 0;

    
}