//REVIEW - Double Pointers

#include<iostream>
using namespace std;

//int main(){
    // int i = 5;
    // int *p = &i;
    // int **p2 = &p;

    // int ***p3 = &p2;

    // int ****p4 = &p3;

    // cout<<"print p : "<<p<<endl; //TODO - yha par jo pointer hai uska address print hoga

    // cout<<"print *p2 :"<<*p<<endl; //TODO -  yha par *p value return karega

    // cout<< *p2 << endl;  //TODO - now if we access *p2 it will return address of p
    
    // cout<< **p2<<endl; //TODO - it will return value stored inside pointer
    

    // cout<<"Adress of p3 :"<<p3<<endl;

    // cout<<"Address of p4 :"<<p4<<endl;

//REVIEW - Updating using function
void update(int *ptr){
   *ptr = *ptr + 1;
}
int main(){


    int x = 10;
    int *ptr = &x;

    int **ptr2 = &ptr;

    int ***ptr3 = &ptr2;


    cout<<"Before Update :"<<&x<<endl;
    cout<<"Before Update :"<<*ptr<<endl;
    cout<<"Before Update :"<<**ptr2<<endl;
    cout<<"Before Update :"<<***ptr3<<endl;
    update(ptr);
    cout<<"After Update :"<<&x<<endl;
    cout<<"AfterUpdate  :"<<*ptr<<endl;
    cout<<"After Update :"<<**ptr2<<endl;
    cout<<"After Update :"<<***ptr3<<endl;


     return 0;


}
   
