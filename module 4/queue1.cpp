#include<iostream>
using namespace std;
#define size 5
class Queue{
    private:
        int element[size],front,rear;
    public:
        Queue(){
            front=-1;
            rear=-1;
        }
    int isfull(){
        if(front==0 && rear==size-1)
            return 1;
        else
        return 0;
    }   
    int enqueue(int ele1) {
        if(isfull()){
            cout<<" Queue Is full";
         }
        else{
            if(front==-1)
            front=0;
            rear++;
            element[rear]=ele1;
            cout<<endl;
            cout<<"added to queue:"<<ele1<<endl;
        }
    }
    void display(){
        int i;
        if(isempty()){
            cout<<"Empty Queue"<<endl;
        }
        else{
            cout<<"Front index: "<<front<<endl;
            cout<<"Elements:"<<endl;
            for (i=front ;i<=rear;i++){
                cout<<element[i]<<endl;
            }
             cout<<"rear_index: "<<rear<<endl;
        }
    }  
    int isempty(){
       if(front==-1)
       return 1;
       else
       return 0;
    }    
    int dequeue(){
        int elem2;
        if(isempty()){
            cout<<"Empty Queue..."<<endl;
        }
        else{
            elem2=element[front];
            if(front>=rear){
                front==-1;
                rear==-1;
        }
            else{
                front++;
            }
            cout<<"deleted element is: "<<elem2<<endl;
            return (elem2);
        }    
    }
    };
int main(){
    Queue q1;
    q1.enqueue(24);
    q1.enqueue(12);
    q1.enqueue(15);
    q1.enqueue(30);
    q1.enqueue(22);
    q1.display();
    q1.dequeue();
     q1.display();
}