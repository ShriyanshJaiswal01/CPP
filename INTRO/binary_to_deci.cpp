#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int ans=0,i = 0;

  if(n == 0){
    return 1;
  }
  while(n!=0){
    int bit = n %10;
    if(bit == 1){
      ans = ans + pow(2,i);
    }
    n = n/10;
    i++;
  }
  cout<<ans<<endl;
}