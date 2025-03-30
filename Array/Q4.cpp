//Sort 0's,1's and 2's
// https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>& arr){
    int zeroPoi = 0;
    int onePoi = 0;
    int twoPoi = arr.size()-1;

    while(onePoi<=twoPoi){
         if(arr[onePoi] == 0){
          swap(arr[zeroPoi],arr[onePoi]);
          zeroPoi++;
          onePoi++;
        }
        else if(arr[onePoi] == 1){
          onePoi++;
        }
        else if(arr[onePoi]==2){
            swap(arr[onePoi],arr[twoPoi]);
            twoPoi--;
            }
    }
}
int main(){
    int n;
    vector<int>arr;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;
    cout<<"Enter the element of vector: "<<endl;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    sort012(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}