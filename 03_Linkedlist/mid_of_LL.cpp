#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d1,node* n1){
        data=d1;
        next=n1;
    }
    node(int d1){
        data=d1;
        next=nullptr;
    }
};
node* mid(node* head){
    node* temp=head;
    int count=1;
    while(temp->next!=nullptr){
        temp=temp->next;
        count++;
    }
    temp=head;
    int midIndex = count / 2;
    for(int i = 0; i < midIndex; i++) {
        if(temp != nullptr) temp = temp->next;
    }
    return temp;
}
int main(){
    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    node* m=mid(head);
    cout<<m->data;
    return 0;

}