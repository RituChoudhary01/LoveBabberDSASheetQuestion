//Rotate Array bt one
//https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
#include<iostream>
using namespace std;
void rotatedByOne(int arr[],int n){
    int lastEle = arr[n-1];
    for(int i=n-1;i>=0 ;i--){
     arr[i+1] = arr[i]; 
    }
    arr[0]=lastEle;
}
int main(){
    int arr[]={9, 8, 7, 6, 4, 2, 1, 35};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotatedByOne(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}