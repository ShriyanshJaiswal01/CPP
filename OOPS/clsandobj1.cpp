#include<iostream>
using namespace std;

class Hero{
  private:
  int health;
  public:
char name[100];
char level;

int getHealth(){
  return health;
}

void setHealth(int h){
  health = h;
}
};

int main(){
  // creation of object
  // static allocation
Hero h1;
cout<<"level is "<< h1.level<<endl;
h1.setHealth(70);
cout<<"health is "<<h1.getHealth()<<endl;

// dynamic allocation
Hero *b = new Hero;
cout<<"level is "<< (*b).level<<endl;

return 0;
}