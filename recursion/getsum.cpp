#include<iostream>
using namespace std;

int getsum(int arr[],int size){
  if(size == 0){
    return 0;
  }
  if(size == 1){
    return arr[0];
  }

  int remaining = getsum(arr+1,size-1);
  int ans = arr[0] + remaining;
  return ans;
}

int main(){
int arr[5] = {2,4,5,6,9};
int ans = getsum(arr,5);
cout<<ans<<endl;
return 0;
}