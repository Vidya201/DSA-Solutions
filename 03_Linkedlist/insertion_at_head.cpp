#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int data1,node* next1){
        data=data1;
        next=next1;

    }
    node(int data1){
        data=data1;
        next = NULL;
    }

};
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }


}
node* inserthead(node* head,int val){
    node* temp=new node(val,head);
    return temp;
}

int main(){
    node* head = new node(5);
    head->next = new node(10);
    head->next->next = new node(15);
    head->next->next->next = new node(20);
    head = inserthead(head,1);
    print(head);
    return 0;


}

