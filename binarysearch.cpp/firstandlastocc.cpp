#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key){
  int s = 0;
  int ans,e = size - 1;
  int mid = s + (e-s)/2;

  while(s<=e){
    if(arr[mid]==key){
      ans = mid;
      e = mid - 1;
    }
    if(arr[mid]>key){
      e = mid - 1;
    }
    if(arr[mid]<key){
      s = mid + 1;
    }
     mid = s + (e-s)/2;
  }
  return ans;
}

int lastocc(int arr[],int size,int key){
  int s = 0;
  int ans,e = size - 1;
  int mid = s + (e-s)/2;

  while(s<=e){
    if(arr[mid]==key){
      ans = mid;
      s = mid + 1;
    }
    if(arr[mid]>key){
      e = mid - 1;
    }
    if(arr[mid]<key){
      s = mid + 1;
    }
     mid = s + (e-s)/2;
  }
  return ans;
}

int main(){
  int arr[5] = {1,2,3,3,5};
  int first = firstocc(arr,5,3);
  int last = lastocc(arr,5,3);
  cout<<first<<endl;
  cout<<last<<endl;
}