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
node* deletetail(node* head){
    while(!head || !head->next){
        return nullptr;
    }
    while(head->next->next!=NULL){
        head=head->next;
    }
    delete head->next;
    head->next=nullptr;
    return head;

}
int main(){
    node* head =new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    deletetail(head);
    print(head);
    return 0;
}