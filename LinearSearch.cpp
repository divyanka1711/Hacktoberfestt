#include <iostream>
using namespace std;
int LinearSearch(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
         return i;
    }
     return -1;   
    
}
int main() {
    int arr[5]={4,6,8,9,9};
    int n=5;
     int res= LinearSearch(arr,8,5);
     if(res==-1)
        cout<<"element is not present";
     else
       cout<<"element is present";
    return 0;
}
