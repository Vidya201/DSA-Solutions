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
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node* insert(int val,int position,node* head){
    node* temp=head;
    int count=1;
    while(temp!=NULL && count<position){
        temp=temp->next;
        count++;

    }

    node* newnode=new node(val,temp->next);
    temp->next=newnode;
    return head;

    


}
int main(){
    node* head=new node(5);
    head->next=new node(10);
    head->next->next=new node(15);
    head->next->next->next=new node(20);
    insert(12,2,head);
    print(head);
    return 0;

}