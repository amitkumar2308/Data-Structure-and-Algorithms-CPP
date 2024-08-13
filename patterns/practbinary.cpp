#include<iostream>
using namespace std;

int firstocc(int arr[],int n, int key){


   int s = 0 , e = n-1;

    int mid  = s + (e-s/2);

    int ans = -1;

    while(s<=e){

       
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }

    return ans;

}

int Lastocc(int arr[],int n, int key){


   int s = 0 , e = n-1;

    int mid  = s + (e-s/2);

    int ans = -1;

    while(s<=e){

        
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }

    return ans;

}

int main(){

    int Even[15] = {2,3,3,3,3,3,3,3,3,3,3,4,5,7,8};

    cout<<"Index of first occurence of element"<< firstocc(Even,15, 3);
    cout<<endl;
    cout<<"Index of Last occurence of element"<< Lastocc(Even,15, 3);

    return 0;
}

