#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
   int i = 1;
   while(i<=n){
    int j = 1;
    int k = 1;
    while(j<=n-i){
      cout<<" ";
      j++;
    }
    while(k<=i){
      cout<<k;
      k++;
    }
    int f = i-1;
    while(f>0){
      cout<<f;
      f--;

    }
    i++;
    cout<<endl;
   }
}