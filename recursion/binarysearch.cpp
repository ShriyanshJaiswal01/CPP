#include<iostream>
using namespace std;

bool binarsearch(int arr[],int s,int e,int k){
  if(s>e)
  return false;

  int mid = s + (e - s)/2;

  if(arr[0] == k)
  return true;

  if(arr[mid]<k){
    return binarsearch(arr,mid+1,e,k);
  }
  if(arr[mid]>k){
    return binarsearch(arr,s,mid-1,k);
  }
}

int main(){
int arr[6] = {2,4,6,10,14,16};
int size = 6;
int key = 14;
bool ans = binarsearch(arr,0,5,key);
if(ans){
  cout<<"present"<<endl;
}else{
  cout<<"not present"<<endl;
}
return 0;
}