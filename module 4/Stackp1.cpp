#include<iostream>
using namespace std;
#define MAX 10
int size=0;
struct stack{
    int elements[MAX];
    int top;
};
typedef struct stack st;
void createst(st *s){
    s->top=-1;
}
int isfull(st *s){
    if(s->top==MAX-1)
      return 1;
    else 
      return 0;
}
int addelement(st *s,int newele){
    if(isfull(s)){
    cout<<"Stack Full...";
    }
    else{
        s->top++;
        s->elements[s->top]=newele; 
    }
    size++;
}
int isempty(st *s){
    if(s->top==-1)
        return 1;
    else
    return 0;    
}
int removeele(st *s){
   if(isempty(s)){
    cout<<"Stack Empty...!!! \n ";
    }
    else{
        cout<<"Elements removed:"<<s->elements[s->top];
    }
    size--;
    cout<<endl;
}
void print_stack(st *s){
    cout<<"Stack : ";
    for(int i=0;i<size;i++){
        cout<<s->elements[i]<<"  ";
    }
    cout<<endl;     
}
int main(){
    st *s=(st *)malloc(sizeof(st));
    createst(s);
    addelement(s,45);
    addelement(s,12);
    addelement(s,30);
    addelement(s,15);
    addelement(s,75);
    cout<<"After adding elements to stack :"<<endl;
    print_stack(s);
    cout<<"Removing Stack elements:"<<endl;
    removeele(s);
    print_stack(s);
}