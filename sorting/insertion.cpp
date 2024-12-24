#include<iostream>
using namespace std;

void sortarr(int arr[],int n){
  for(int i = 1;i<n;i++){
    int temp = arr[i];
   int j;
    for(  j = i - 1;j>=0;j--){
      if(arr[j]>temp){
        arr[j+1] = arr[j];
      }
      else{
        break;
        }
    }
    arr[j+1] = temp;
    break;
  }
  
}

int main(){
  int arr[5] = {64,12,22,24,11};
  sortarr(arr,5);
  for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
  }

}