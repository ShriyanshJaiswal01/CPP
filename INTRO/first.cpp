#include<iostream>
using namespace std;

int main(){
   char ch;
   cin>>ch;
   int a = ch;
   if(a>=65 && a<=90){
      cout<<"upper case"<<endl;
   }else if(a>=97 && a<=122){
      cout<<"lower case"<<endl;
   }else if(a>=48 && a<=57){
      cout<<"numeric value"<<endl;
   }
}