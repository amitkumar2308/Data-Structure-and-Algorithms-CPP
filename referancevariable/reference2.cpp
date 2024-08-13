#include<iostream>
using namespace std;

int main(){

    char ch = 'a';
    cout<<sizeof(ch)<<endl;
    char* c = &ch;
    cout<<sizeof(c)<<endl;

    cout<<sizeof(&c) + sizeof(ch)<<endl;

    return 0;
}