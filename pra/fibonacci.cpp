#include<iostream>
using namespace std;

int main(){
  int a = 0;
  int b = 1;

  int n;
  cin>>n;
  cout<<a<<" ";
  cout<<b<<" ";
int ans = 0;
  for(int i = 1;i<=n;i++){
    ans = a+b;
    cout<<ans<<" ";
    a = b;
    b = ans;
  }
}