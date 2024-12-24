#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this ->data = data;
    this ->next = NULL;
  }
};

void insertAtHead(Node* &head,int d){
  Node* temp = new Node(d);
  temp ->next = head;
  head = temp;
}

void print(Node* &head){
  Node* temp = head;
  
  while(temp != NULL){
    cout<<temp ->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

bool isCircularList(Node* head){
  if(head == NULL){
    return NULL;
  }

  Node* temp = head->next;
  while(temp!=NULL && temp != head){
    temp = temp->next;
  }

  if(temp == head){
    return true;
  }else{
    return false;
  }
}



int main(){
Node* node1 = new Node(10);
Node* head = node1;
insertAtHead(head,3);
insertAtHead(head,5);
print(head);

if(isCircularList(head)){
  cout<<"link list is circular in nature"<<endl;
}else{
  cout<<"link list is not circular in nature"<<endl;
}
return 0;
}