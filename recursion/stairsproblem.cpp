#include<iostream>
using namespace std;
int noofways(int n){
  if(n<0){
    return 0;
  }
  if(n==0){
    return 1;
  }

  int ans = noofways(n-1) + noofways(n-2);
  return ans;
}
int main(){
int n;
cin>>n;
int ans = noofways(n);
cout<<ans<<endl;
return 0;
}