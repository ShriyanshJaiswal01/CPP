#include<iostream>
using namespace std;

int findpeak(int arr[],int size){
  int s = 0;
  int e = size - 1;
  int mid = s + (e-s)/2;

  while(s<e){
    if(arr[mid]<arr[mid+1]){
      s = mid + 1;
    }else{
      e = mid;
    }
    mid = s + (e-s)/2;
  }
  return s;
}

int main(){
  int arr[4] = {1,4,3,2};
  int peak = findpeak(arr,4);
  cout<<peak<<endl;
}