#include<iostream>
using namespace std;
class Node{
    public:
    int data;
      Node *next;
    public:
    Node(int data){
    this->data=data;
    this->next=nullptr;
    }
};
class Linklist{
    private:
    Node *head;
    public:
    Linklist(){
        this->head = nullptr;
    }
    //inserting at starting position.
    void beginingpos(int data){
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
    //inserting at ending position.
    void endingpos(int data){
        Node* newnode=new Node(data);
        if(head==nullptr){
            head=newnode;
            return;
        }
        Node* temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    //deleting at starting position.
    void deletefirst(){
        if(head==nullptr){
            return;
        }
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    //deleting at ending position.
    void deletend(){
        if(head==nullptr){
            delete head;
            head=nullptr;
            return;
        }
        Node *temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
// printing the Printing list.
    void printlst(){
        Node *temp=head;
        while(temp!=nullptr){
          cout<<temp->data<<" ";
           temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
   Linklist lst;

   lst.beginingpos(2);
   lst.beginingpos(5);
   lst.beginingpos(7);
   lst.beginingpos(9);
   lst.beginingpos(4);
   cout<<"printing List after inserting: ";
   lst.printlst();
   cout<<"printing list  inserting at end: ";
    lst.endingpos(6);
      lst.printlst();
   cout<<"printing list after deleting first element: ";
   lst.deletefirst();
     lst.printlst();
   lst.deletend();
   cout<<"printing list deleting at end: ";
     lst.printlst();
   cout<<"Final list is:";
   lst.printlst();
}