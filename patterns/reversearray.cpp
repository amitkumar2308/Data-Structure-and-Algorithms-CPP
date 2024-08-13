#include <iostream>

using namespace std;

void extraarr(int originalArr[], int size , int lastindex) { 
    cout << "Size of array: " << size << std::endl;
    
    cout<< "LastIndex:" << lastindex << std:: endl;

    for (int i = lastindex; i>=0 ; i--){
        cout<<""<<originalArr[i]<<" ";
    }
}

int main() {
    int originalArr[] = {1, 2, 3, 4, 5};
    int size = sizeof(originalArr) / sizeof(originalArr[0]);

    int lastindex = size-1;
    extraarr(originalArr, size , lastindex);
    return 0;
}
