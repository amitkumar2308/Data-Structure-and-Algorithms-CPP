#include<iostream>
using namespace std;


// void update(int i){
//     i++;   //FIXME - this will create new memory bcz here i do pass by value or when i call update function in main function it will not update actuallly;
// }
void update(int &i){
    i++;                 //REVIEW - but i use call by reference &i here it do not create new memory it points the same value on same memory and update it when i call update function in main function
}

int main(){

int i = 6;

// int &j = i;  //TODO -  &j store address of i

// i++;
// cout<<i<<endl;

// j++;
// cout<<j<<endl;

cout<<"before :"<<i<<endl;
update(i);
cout<<"after :"<<i<<endl;

}