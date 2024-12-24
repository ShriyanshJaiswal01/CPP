#include<iostream>
using namespace std;

bool primenum(int n){
   for(int i = 2; i<n;i++){
    if(n%i==0){
      return 0;
    }
   }
   return 1;
}

int main(){
int n;
cin>>n;

if(primenum(n)){
  cout<<"prime num"<<endl;
}else{
  cout<<"not prime"<<endl;
}
}