#include<iostream>
using namespace std;

void sum(int arr[][4],int row,int col){
  for(int i = 0;i<col;i++){
    int sum = 0;
    for(int j = 0;j<row;j++){
      sum = sum + arr[j][i];
    }
    cout<<sum<<endl;
}
}
int main(){
   int arr[3][4];
  for(int i = 0;i<3;i++){
    for(int j = 0;j<4;j++){
      cin>>arr[i][j];
    }
  }

  for(int i = 0;i<3;i++){
    for(int j = 0;j<4;j++){
      cout << arr[i][j]<<" ";
    }
    cout<<endl;
}
sum(arr,3,4);
}