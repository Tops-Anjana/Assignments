#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
    int push(Node** head,int data){
        Node* newNode=(Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = *head;
        *head=newNode;
    }
    void display(Node *node){
        while(node != NULL){
            cout<<node->data<<" ";
            node=node->next;
        }        
    }
    void delete_data(Node *&head){
        Node *temp=head;
        if(head==NULL){
            cout<<"List is Empty.."<<endl;
        }
        cout<<endl;
        cout<<"Value deleted: "<<temp->data<<endl;;
        head=head->next;
        delete temp;
    }
int main(){
    Node* head=NULL;
    push(&head,15);
    push(&head,30);
    push(&head,22);
    push(&head,12);
    push(&head,24);
    cout<<"Display List:"<<endl;
    display(head);
    delete_data(head);
    display(head);
}