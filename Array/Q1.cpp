//Reverse an array
// https://www.geeksforgeeks.org/problems/reverse-an-array/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void print(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int>arr;
    int n;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    reverse(arr);
    print(arr);
    return 0;
}