#include<iostream>
using namespace std;

void sortzeros(int arr[],int n){
  int i = 0;
  for(int j = 0;j<n;j++){
    if(arr[j] != 0){
      swap(arr[i],arr[j]);
      i++;
    }
  }
}
 
int main(){
  int arr[5] = {0,1,0,3,12};
  sortzeros(arr,5);
  for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}