#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
  for(int i = 0;i<size;i++){
    if(arr[i]==key){
      return 1;
    }
  }
  return 0;
}

int main(){
  int arr[10] = {12,2,3,4,23,5,6,7,1,0};
  int key;
  cin>>key;

  bool found = search(arr,10,key);

  if(found){
    cout<<"present"<<endl;
  }else{
    cout<<"absent"<<endl;
  }

}
