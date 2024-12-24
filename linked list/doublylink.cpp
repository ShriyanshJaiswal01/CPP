#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  Node(int d){
    this ->data = d;
    this ->next = NULL;
    this ->prev = NULL;
  }

  ~Node(){
    int val = this->data;
    if(next != NULL){
      delete next;
      next = NULL;
    }
    cout<<"memory free for node with data"<<val<<endl;
  }
};

void print(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp ->data<<" ";
    temp = temp ->next;
  }
  cout<<endl;
}

int getlength(Node* head){
  int len = 0;
  Node* temp = head;
  while(temp!=NULL){
    len++;
    temp = temp ->next;
  }
  return len;
}

void insertAtHead(Node* &head , int d){
  Node* temp = new Node(d);
  temp ->next = head;
  head ->prev = temp;
  head = temp;
}

void insertAtTail(Node* &tail,int d){
  Node* temp = new Node(d);
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position, int d){

if(position == 1){
  insertAtHead(head,d);
  return;
}

  Node* temp = head;
  int cnt = 1;
  while(cnt<position-1){
    temp = temp->next;
    cnt++;
  }

  if(temp ->next == NULL){
    insertAtTail(tail,d);
    return;
  }


  Node* nodetoinsert = new Node(d);
  nodetoinsert->next = temp->next;
  temp->next->prev = nodetoinsert;
  temp->next = nodetoinsert;
  nodetoinsert->prev = temp;
}

void deleteNode(int position, Node* &head){
  if(position == 1){
    Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp ->next = NULL;
    delete temp;
  }else{
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt<position){
      prev = curr;
      curr = curr ->next;
      cnt++;
    }

    
    curr ->prev = NULL;
    prev ->next = curr->next;
    curr ->next = NULL;
    delete curr;

  }
}

int main(){
Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1;
print(head);
cout<<getlength(head)<<endl;

insertAtHead(head,11);
print(head);
insertAtHead(head,13);
print(head);
insertAtHead(head,8);
print(head);

insertAtTail(tail,25);
print(head);

insertAtPosition(head , tail, 2, 45);
print(head);

deleteNode(1,head);
print(head);

deleteNode(3,head);
print(head);

return 0;
}