// NOTE : - POINTERS IN ARRAY IF WE DEFINE LIKE THIS [ INT ARR[10]] 

//REVIEW - Int ARR[10]={1,2,3,4,5,6,7,8,9,10} each character of 4 bytes means 4 * 10 = 40bytes array'


//NOTE : -Start

#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    cout<<"address of first elment : "<<arr<<endl;  //array name indicates its first address like arr
    cout<<"value of element:"<<arr[0]<<endl;
    cout<<"try out with pointer does it gives value"<<*arr<<endl;
    cout<<"address of first elment : "<<&arr[0]<<endl;  //array name indicates its first address like arr
    cout<<*arr+1<<endl; //it gives 0 index value + 1 means starting value + 1
    cout<<(*arr+1)<<endl; //it gives 0 index value + 1 means starting value + 1
    cout<<*(arr+1)<<endl; //it gives 0 index value + 1 means starting value + 1
    cout<<(*arr)+1<<endl;
    //if we remove star
    cout<<(arr+1)<<endl; //NOTE - it increase address of arr by 4 bytes
    


    //LINK -pointer array 1.png

    //REVIEW - FORMULA

    //arr[i] = *(arr+i)

    cout<<arr[4]<<endl;   //--->5
    cout<<*(arr+4)<<endl; //--->5

    //i[arr] = *(i+arr)
    int i=4;

    cout<<i[arr]<<endl;  
    cout<<*(i+arr)<<endl; 


    //SECTION - Checking size of pointer and array
    cout<<"Size of array is "<<sizeof(arr)<<endl;
    cout<<"Size of pointer is "<<sizeof(*arr+0);
    cout<<sizeof(*arr)<<endl;    //NOTE here i using mingw 32bit that why it show point size also 4bytes vut in 64 bit bit systam it show 8 bytes of pointer means size of pointer is 8.

    cout<<"---------------------------------------------------------------------------"<<endl;
    int a[20]  = {1,2,3,4,5,6};

    //REVIEW a=a+1; this is not possible because we cant cahnge symbol table data
    //LINK - cant update symbol table .png

    //!SECTION - Now update pointer
    int *ptr = &a[0];
    cout<<ptr<<endl;
    ptr = ptr+1;
    cout<<ptr<<endl;



    cout<<"->"<<&a[0]<<endl; //print address of first element
    cout<<&a<<endl; //print address of first element
    cout<<a<<endl; //print address of first element

    int *p = &a[0];
     
    cout<<p<<endl;
    cout<<*p<<endl; //it gives value of first element
    cout<<&p<<endl; //print address of point which point to first element it is different then element adress
   

}


