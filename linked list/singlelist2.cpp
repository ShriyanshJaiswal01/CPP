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

  ~Node(){
    int value = this ->data;
    if(this ->next != NULL){
      delete next;
    }
    cout<<"memory is free for node with data"<<value<<endl;
  }
};

void insertAtTail(Node* &tail,int d){
  Node* temp = new Node(d);
  tail ->next = temp;
  tail = tail ->next;

}

void print(Node* &head){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp ->data<<" ";
    temp = temp ->next;
  }
  cout<<endl;
}
void insertAtHead(Node* &head,int d){
  Node* temp = new Node(d);
  temp ->next = head;
  head = temp;
}

void insertAtPosition(Node* &head,Node* &tail, int position, int d){

if(position == 1){
  insertAtHead(head,d);
  return;
}

  Node* temp = head;
  int cnt = 1;
  while(cnt < position-1){
    temp = temp ->next;
    cnt++;
  }
  if(temp ->next == NULL){
    insertAtTail(tail,d);
  }

  Node* nodeToInsert = new Node(d);
  nodeToInsert ->next = temp ->next;
  temp ->next = nodeToInsert;
}


void deleteNode(int position, Node* &head){
  if(position == 1){
    Node* temp = head;
    head = head ->next;
    temp->next = NULL;
    delete temp;
  }else{
    Node* curr = head;
    Node* pre = NULL;
    
    int cnt = 1;
    while(cnt< position){
      pre = curr;
      curr = curr ->next;
      cnt++;
    }

    pre ->next = curr ->next;
    curr->next = NULL;
    delete curr;
  }
}

int main(){
Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1;
insertAtTail(tail,15);

print(head);

return 0;
}