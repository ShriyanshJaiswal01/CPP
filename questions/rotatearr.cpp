#include<iostream>
#include<vector>
using namespace std;

void rotatearr(vector<int>& arr,int k){
  
  int n = arr.size();
  vector<int> temp(n);
  for(int i = 0;i<n;i++){
    temp[(i+k)% n] = arr[i];
  }
  arr = temp;
}

int main(){
  vector<int> arr= {1,2,3,4,5};
  rotatearr(arr,2);
  for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}