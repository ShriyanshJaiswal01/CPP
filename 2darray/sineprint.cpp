#include<iostream>
using namespace std;

void printsine(int arr[][4], int row , int col){
  for(int i = 0;i<col;i++){
    if(i & 1){
      for(int j = row -1;j>=0;j--){
        cout<<arr[j][i]<<" ";
      }
    }else{
      for(int j = 0;j<row;j++){
        cout<<arr[j][i]<<" ";
      }
    }
  }
}

int main(){
  int arr[3][4] = {{1,2,3,4}, {2,3,4,5},{5, 6, 7, 8}};
  printsine(arr,3,4);
}