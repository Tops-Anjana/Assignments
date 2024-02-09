#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    int prior;
    Node *next;
};
Node *start=NULL;
void push(int data,int prior){
    Node *temp,*curr,*pre=NULL;
    temp= new Node;
    temp->data=data;
    temp->prior=prior;
    if(start==NULL || prior >=start->prior){
       temp->next=start;
       start=temp;
    }
    else{
        curr=start;
        while(curr && prior<=curr->prior){
            pre=curr;
            curr=curr->next;
        }
        temp->next=pre->next;
        pre->next=temp;
    }
}
void display(){
       if(start==NULL){
        cout<<"Queue is empty"<<endl;
       }
        Node *curr=start;
        cout<<"\n Priority Element:"<<endl;
        while(curr){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
        return;
}
void delete_1(){
    if(start==NULL){
        cout<<"Queue is Empty.."<<endl;
    }
    else{
        Node *temp;
        temp=start;
        cout<<"Deleted "<<temp->data<<endl;
        start=temp->next;
        free(temp);
    }
}
void peak(){
     cout<<"Peak Element: "<<start->data<<endl;
}
int main(){
    push(2,2);
    push(7,3);
    display();
    peak();
    display();
    delete_1();
    display();
}