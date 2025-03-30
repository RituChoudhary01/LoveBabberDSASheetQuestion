//Find the union and intersection of two sorted array
#include<iostream>
#include<vector>
using namespace std;
vector<int> unionOfSortedArrays(vector<int>&arr1, vector<int>&arr2){
 vector<int>Union;
int i=0,j=0;
while(i<arr1.size() || j<arr2.size()){
    if(arr1[i]==arr2[j]&& Union.back()!= arr1[i]){
        Union.push_back(arr1[i]);
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j] && arr1[i]!=Union.back()){
      Union.push_back(arr1[i]);
        i++;
    }
    else {
        Union.push_back(arr2[j]);
        j++;
    }
}
return Union;
}
int main(){
   int n,m;
   cin>>n>>m;
   vector<int>v1;
   for(int i=0;i<n;i++){
    int input ;
    cin>>input;
    v1.push_back(input);
   }
   vector<int>v2;
    for(int i=0;i<m;i++){
    int input ;
    cin>>input;
    v2.push_back(input);
   }
    vector<int>Union = unionOfSortedArrays(v1,v2);
    for (int i = 0; i < Union.size(); i++)
    {
        cout<<Union[i]<<" ";
    }
     return 0;
}