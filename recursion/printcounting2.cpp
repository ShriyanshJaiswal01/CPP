#include<iostream>
using namespace std;

void printcounting(int n){
  if(n == 0){
    return;
  }

  
  printcounting(n-1);
  cout<<n<<" ";
}

int main(){
cout<<"enter your number here"<<endl;
int n;
cin>>n;
printcounting(n);
return 0;
}