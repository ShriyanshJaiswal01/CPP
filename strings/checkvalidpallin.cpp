#include<iostream>
#include<string>
using namespace std;

bool valid(char ch){
  if((ch >='a'&& ch<='z')||(ch>='A'&& ch<='B')|| (ch>='0'&&ch<='9')){
    return 1;
  }
  return 0;
}

char toLowercase(char ch){
  if((ch >= 'a' && ch<= 'z')|| (ch>='0'&& ch<='9')){
    return ch;
  }else{
    char temp = ch - 'A' + 'a';
    return temp;
  }
}
bool checkpallindrome(string temp){
  int s = 0;
  int e = temp.length()-1;
  while(s<=e){
    if(temp[s++]!=temp[e--]){
      return 0;
    }
  }
  return 1;
}

bool ispallindrome(string name){

  string temp = "";

  for(int j = 0;j<name.length();j++){
    if(valid(name[j])){
      temp.push_back(temp[j]);
    }
  }
 for(int i = 0;i<temp.length();i++){
  temp[i] = toLowercase(temp[i]);
 }

 return checkpallindrome(temp);
}

int main(){
  string name = "aba";
  if(ispallindrome(name)){
    cout<<"yes"<<endl;
  }else{
    cout<<"not"<<endl;
  }
}