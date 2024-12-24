#include<iostream>
using namespace std;

void sortarr(int arr[],int n){
  for(int j = 1;j<n;j++){

    bool swapped = false;
    for(int i = 0;i<n-j;i++){
    if(arr[i]>arr[i+1]){
      swapped = true;
      swap(arr[i],arr[i+1]);
    }
  }
  if(swapped == false){
    break;
  }
  }
  
}

int main(){
  int arr[6] = {10,1,7,6,14,9};
  sortarr(arr,6);
  for(int i = 0;i<6;i++){
    cout<<arr[i]<<" ";
  }
}