//Find the largest sum contiguous subarray (Kadane's algorithm)
//https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
#include<iostream>
#include<vector>
using namespace std;
 int maxSubarraySum(vector<int>& arr){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0;i<arr.size();i++){
        currSum+=arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum<=0){
            currSum = 0;
        }
    }
    return maxSum;
 }
 int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    int maxSubarrSum = maxSubarraySum(arr);
    cout<<maxSubarrSum<<endl;
    return 0;
 }