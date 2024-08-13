//REVIEW - CHARACTER ARRAY

//NOTE - Start

#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};                        

    char ch [5] = {'a','b','c','d','e'};   //FIXME  IF WE DECLARE IT AS INTEGER DATATYPE THEN IT SHOW ASCCI CODES  ASCII CODES - a = 97, b = 98, c = 99, d = 100, e = 101

    
    cout<<arr[3]<<endl;  //FIXME - This will return output as 4 as usual


    cout<<ch[2]<<endl;   //FIXME - This will return output as 'c' index value like if we print ch[3] it will give output as 'd'

s
    cout<<arr<<endl;     
                                //REVIEW - IN this case arr --> print addrres of first elment of array   while -> ch prints all character of array   
    cout<<ch<<endl;


    //TODO - Understand the outcome here implementation for cout function is different for INTEGER ARRAY OR FOR CHARACTER ARRAY 
    //REVIEW - IT WILL PRINT PRINT ADDRESS FOR INTRGER ARRAY WHILE ACCESSING THE ARR WHILE IN CHARACTER ARRAY IT SHOW ENTIRE STRING  INT ARRAY = 0x61fefc  CHAR ARRAY = abcde☺  

    char *c = &ch[0];
    cout<<"value of c -> "<<c<<endl;   //FIXME - it had to return address of pointer stored value but it show the value but in case of integer it show address


                         

    char temp = 'z';
    char *p = &temp;

    cout<<p<<endl;



    //NOTE -  Now understand in depth
    

    //REVIEW -  char ch[6] = "abcdef" 

    /*How it is work in backend 
    
    it create --> temp memory = "abcdef"    //ANCHOR - which is goog practices 
                  memory ch = temp memory
    */
     
    //REVIEW - char *c = "abcdef"    
    /*How it is work in backend 
    
    it create --> temp memory = "abcdef"  instead store address of temp memory   //ANCHOR - which is not good practices 
                  memory ch = temp memory
    */


   //TODO - Uderstand from pointer you cant perform write operation it only allow you to read only option if you want to access that memory then segmentation fault occur
   //TODO - Segmentation faults in C or C++ is an error that occurs when a program attempts to access a memory location it does not have permission to access. Generally, this error occurs when memory access is violated and is a type of general protection fault. Segfaults are the abbreviation for segmentation faults.

    //REVIEW - char ch[6] = "abcdef";: This approach allocates an array and copies the string into it. The array is modifiable and safe for typical string operations.
    //REVIEW -  *c = "abcdef";: This approach sets a pointer to a read-only string literal. Modifying the string via the pointer is unsafe and leads to undefined behavior.
    return 0;
}