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
};    