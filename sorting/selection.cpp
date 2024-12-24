#include<iostream>
using namespace std;

void sortarr(int arr[],int n){
  for(int i = 0;i<n-1;i++){
    int minindex = i;
    for(int j = i+1;j<n;j++){
      if(arr[minindex]>arr[j]){
        minindex = j;
      } 
    }
    swap(arr[minindex],arr[i]);
  }
}

int main(){
  int arr[5] = {64,12,22,24,11};
  sortarr(arr,5);
  for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
  }
}