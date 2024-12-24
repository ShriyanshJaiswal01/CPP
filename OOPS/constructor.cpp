#include<iostream>
using namespace std;

class Hero{
  public:
  int health;
  char level;

  Hero(){
    cout<<"constructor called"<<endl;
  }

  // parameterised constructor
  Hero(int health){
    this->health = health;
  }
};

int main(){

return 0;
}