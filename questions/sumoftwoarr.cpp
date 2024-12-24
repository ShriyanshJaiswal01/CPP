#include<iostream>
#include<cmath>
using namespace std;

int sum(int arr1[],int n,int arr2[],int m){
  int sum1 = 0,sum2 = 0;
  for(int i = n-1,j = 0;i>=0;i--,j++){
    sum1 = (arr1[i] * pow(10,j)) + sum1 ; 
  }

  for(int i = m-1,j = 0;i>=0;i--,j++){
    sum2 = (arr2[i] * pow(10,j)) + sum2 ; 
  }
  return sum1 + sum2;
}

int main(){
  int arr1[3] = {1,2,3};
  int arr2[2] = {8,9};
  int finalsum = sum(arr1,3,arr2,2);
  cout<<finalsum<<endl;
}