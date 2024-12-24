#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> num1, vector<int> num2){
  int s = 0;
  int i = 0,j = 0;
  while(i<num1.size() && j<num2.size()){
    if(num1[i]<num2[j]){
      i++;
    }else{

    }
  }
}

int main(){
  vector<int> num1;
  vector<int> num2;

  num1.push_back(1);
  num1.push_back(2);
  num1.push_back(3);
  num2.push_back(2);
  num2.push_back(5);
  num2.push_back(6);

  merge(num1,num2);
}