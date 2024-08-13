#include<iostream>
#include<vector>
using namespace std;        


int findmax(vector<int> list,int n){
    int max_value = list[0];

    for(int i = 1 ; i<n; i++){
        if(list[i] > max_value){
            max_value  = list[i];
        }

    }

    return max_value;
}

int main (){
    vector<int> list = {3,6,4,6,8,9,13,44};

    int n = list.size();

   int maxvalue = findmax(list,n);

    cout<<"Max value:"<<maxvalue <<endl;


}