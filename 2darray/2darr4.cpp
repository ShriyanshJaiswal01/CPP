#include<iostream>
using namespace std;

int  sum(int arr[][4],int row,int col){
  int maxi = INT16_MIN;
  int rowind = -1;
  for(int i = 0;i<row;i++){
    int sum = 0;
    for(int j = 0;j<col;j++){
      sum = sum + arr[i][j];
    }
   if(sum > maxi){
       maxi = sum;
       rowind = i;
    } 
   
}
cout<<maxi<<endl;
return rowind;
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
int rowind = sum(arr,3,4);
cout<<rowind<<endl;
}