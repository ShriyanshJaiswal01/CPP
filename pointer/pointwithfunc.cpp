#include<iostream>
using namespace std;

void print(int *p){
  cout<<p<<endl;
  cout<<*p<<endl;
}

void update(int *p){
  p = p + 1;
}
int main(){

int value = 5;
int *p = &value;
// print(p);
cout<<"before "<<p<<endl;
update(p);
cout<<"after "<<p<<endl;

return 0;
}