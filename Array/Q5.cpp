//Move all negative number to beginning and all positive to end with constant
//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include<iostream>
#include<vector>
using namespace std;
void shiftNeg(vector<int>& arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        if(arr[start]<0) start++;
        else if(arr[end]>=0) end--;
        else{
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    shiftNeg(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    }