#include<iostream>
using namespace std;

bool findtarget(int arr[][4],int row,int col,int target){
  int start = 0;
  int end = row*col - 1;

  int mid = start + (end - start)/2;

  while(start<=end){
    int element = arr[mid/col][mid%col];
    if(element == target){
      return 1;
    }
    if(element<target){
      start = mid + 1;
    }else{
      end = mid - 1;
    }
      mid = start + (end - start)/2;
  }
  return 0;
}

int main(){
  int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  int target = 11;
  if(findtarget(arr,3,4,target)){
    cout<<"present"<<endl;
  }
}