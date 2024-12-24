#include<iostream>
using namespace std;
int main(){
int n = 6;
int* m = &n;
int* p = m;
cout<<m<<endl;
cout<<p<<endl;
return 0;
}