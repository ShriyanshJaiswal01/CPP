#include<iostream>
using namespace std;

void swapalternate(int arr[],int n){
  int a = 0;
  for(int i = 0;i<n-1;i++){
    swap(arr[a],arr[a+1]);
    a = a+2;
  }
}

int main(){
  int arr[6] = {1,2,3,4,5,6};
  // swapalternate(arr,6);
  // for(int i = 0;i<6;i++){
  //   cout<<arr[i]<<" ";
  // }
  int ans = 3^0;
  cout<<ans;
}
