#include<iostream>
using namespace std;

class A{

  public:
  void sayHello(){
    cout<<"Hey I am Shriyansh"<<endl;
  }

  void sayHello(string name){
    cout<<"Hiiii I am Shriyansh"<<endl;
  }
};

int main(){

A obj;
obj.sayHello();
return 0;
}