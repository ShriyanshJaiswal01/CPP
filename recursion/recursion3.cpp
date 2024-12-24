#include<iostream>
using namespace std;

void destiny(int src, int dest){
  if(src == dest){
    cout<<"pahunch gaya"<<endl;
    return ;
  }
  src++;
  destiny(src,dest);
}
int main(){
int src = 1;
int dest = 10;
destiny(src,dest);
return 0;
}