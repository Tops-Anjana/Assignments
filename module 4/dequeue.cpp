#include<iostream>
using namespace std;
#define Max 10
class Dequeue{
      public:
      int arr[Max];
      int front,rear,size;
      public:
      Dequeue(int size){
        front=-1;
        rear=0;
        this->size=size;
      }
void insertfront(int key){
           if(full()){
            cout<<"Overflow..."<<endl;
           return;
           }    
        if(front == -1){
           front=0;
           rear=0;
        }
        else if(front == 0)
           front=size-1;
        else
            front=front-1;
            arr[front] = key;
      }
void insertrear(int key){
        if(full()){
            cout<<"Queue is full..."<<endl;
            return;
        }
        if(front == -1){
            front=0;
            rear=0;
        }
        else if(rear == size-1)
        rear=0;
        else{
            rear=rear + 1;
            arr[rear]=key;
        }
      }
int deletefront(){
     if(empty()){
      cout<<"Queue is underflow "<<endl;
     }
     if(front ==rear){
      front=-1;
      rear=-1;
     }
     else if(front ==size-1)
     front=0;
     else
      front=front+1;
     
}
int deleterear(){
      if(empty()){
        cout<<"underflow "<<endl;
      }
      if(front==rear){
        front=-1;
        rear=-1;
      }
      else if(rear==0)
      rear=size-1;
      else
      rear=rear-1;
}
int getfront(){
  if (empty()) {
    cout << " Underflow\n"<< endl;
      return -1;
  }
  return arr[front];
}
int getrear() {
  if (empty() || rear < 0) {
    cout << " Underflow\n"<< endl;
    return -1;
  }
  return arr[rear];
}
int empty(){
        return (front==-1);
//            cout<<"Queue is Empty"<<endl;
        }
int full(){
        return ((front== 0 && rear==size-1) || front==rear+1);
          //  cout<<"Queue is full"<<endl;
        
      }
};

int main(){
    Dequeue ded(4);
    ded.insertrear(5);
    ded.insertrear(20);
    ded.getrear();
    cout<<"Get rear element :"<<ded.getrear()<<endl;
    ded.insertfront(80);
       cout<<"Inserted element is:"<<ded.getfront()<<endl;
    ded.insertfront(45);
     cout<<"Inserted element is:"<<ded.getfront()<<endl;
     ded.deletefront();
    cout<<"deleted element is:"<<ded.getfront()<<endl;

}