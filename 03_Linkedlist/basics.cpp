#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
    }

};
int main(){
    
    
    node* c=new node(15,nullptr);
    node* b= new node(10,c);
    node* a = new node(5,b);

    cout<<a->data<<endl;
    cout<<b->data<<endl;
    cout<<c->data<<endl;
    cout<<a->next->data<<endl;
    cout<<b->next->data<<endl;
    if(c->next != nullptr){
        cout<<c->next->data<<endl;
    } else {
        cout<<"end of list"<<endl;
    }

    

    return 0;
}