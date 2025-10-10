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
    }
};


node* search(node* head, int val) {
    node* temp=head;
    while(temp!=nullptr){
        if(temp->data==val){
            cout<<"true";
            return temp;
        }
        temp=temp->next;
}
cout<<"false";
return nullptr;
}
int main(){
    node* head=new node(5);
    head->next=new node(10);
    head->next->next=new node(15);
    search(head,10);
    return 0;
}
