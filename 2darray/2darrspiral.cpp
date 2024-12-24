#include<iostream>
using namespace std;

void spiralprint(int arr[][4],int row,int col){
  int count = 0 ;
  int total = row * col;

  int startingrow = 0;
  int startingcol = 0;
  int endingrow = row - 1;
  int endingcol = col - 1;

  while(count < total){
    for(int index = startingcol; count < total && index<=endingcol;index++){
      cout<<arr[startingrow][index]<<" ";
      count++;
    }
    startingrow++;

    for(int index = startingrow; count < total && index<=endingrow;index++){
      cout<<arr[index][endingcol]<<" ";
      count++;
    }
    endingcol--;
  }
  for(int i = endingcol; count < total && i>=startingcol;i--){
    cout<<arr[endingrow][i]<<" ";
    count++;
  }
  endingrow--;
  for(int i = endingrow; count < total && i>=startingrow;i--){
    cout<<arr[i][startingcol]<<" ";
    count++;
  }
  startingcol++;
}

int main(){
  int arr[4][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6},{9,8,7,6}};
  spiralprint(arr,4,4);
}