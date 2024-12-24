#include<iostream>
#include<string>
using namespace std;

char toLowercase(char ch){
  if(ch >= 'a' && ch<= 'z'){
    return ch;
  }else{
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

bool pallindrome(char str[],int n){
  int s = 0;
  int e = n - 1;
  while(s<=e){
    if(toLowercase(str[s++])!=toLowercase(str[e--])){
      return false;
    }
  }
  return true;
}

int getlen(char str[]){
  int count = 0 ;
  for(int i = 0;str[i]!= '\0';i++){
    count ++;
  }
  return count;
}

int main(){
  char str[20];
  cout<<"enter your str"<<endl;
  cin>>str;
  cout<<"your str is "<<str<<endl;
  int n = getlen(str);
  if(pallindrome(str,n)){
    cout<<"is pallindrome"<<endl;
  }else{
    cout<<"not pallindrome"<<endl;
  }

  cout<<toLowercase('b')<<endl;
}