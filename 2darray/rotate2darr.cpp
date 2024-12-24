#include<iostream>
using namespace std;

void rotatearr(int arr[][4],int row,int col){
  int arr2[row][col];
  int temp;
  for(int i = row;i>=0;i--){
    for(int j = col;j>=0;j--){
      // temp = arr[i][j];
      arr2[row-j][col-i] = arr[i][j];
    }
  }
  for(int i = 0;i<4;i++){
    for(int j = 0;j<4;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

  rotatearr(arr,3,3);
  // for(int i = 0;i<4;i++){
  //   for(int j = 0;j<4;j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

}