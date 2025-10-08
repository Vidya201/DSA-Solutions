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
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node* deletenode(node* head,int position){
    node* temp=head;
    int count=1;
    while(head!=NULL && count<position-1){
        temp=temp->next;
        count++;
    }
    node* deletenode=temp->next;
    temp->next=temp->next->next;
    delete deletenode;
    
    return head;


}
int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    deletenode(head,1);
    print(head);
    return 0;
}
