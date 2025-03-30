//Find the maximum and minimum element in an array
//https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include<iostream>
#include<vector>
using namespace std;
pair<int,int>getMinMax(vector<int>&arr){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(maxi < arr[i]) maxi = arr[i];
        if(mini > arr[i]) mini = arr[i];
    }
    return make_pair(mini,maxi);
}

int main(){
    int n;
    vector<int> arr;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    int mini = getMinMax(arr).first;
    int maxi = getMinMax(arr).second;
    cout<<"Minimum element of vector: "<<mini<<endl;
    cout<<"Maximum element of vector: "<<maxi<<endl;
    return 0;
}