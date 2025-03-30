//Find the Kth max and min element of an array.
//https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int kthSmallest(vector<int>& arr,int k){
map<int,int>mp;
for(int i=0;i<arr.size();i++)
mp[arr[i]]++;

for(auto it:mp){
if(it.second!=0) k--;
if(k==0) return it.first;
}
return 0;
}
int main(){
    int n;
    vector<int>arr;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    int k;
    cout<<"Enter the value of k: "<<endl;
    cin>>k;
    int ans = kthSmallest(arr,k);
    cout<<"Kth Smallest element of array is: "<<ans<<endl;
    return 0;
}