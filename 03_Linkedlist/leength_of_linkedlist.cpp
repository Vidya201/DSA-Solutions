#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    node(int d1,node* n1){
        data=d1;
        next=n1;
    }
    node(int d1){
        data=d1;
        next=nullptr;
    }
};
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int length(node* head){
    int count = 0;
    node* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    cout << count << endl;
    return count;
}
int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    length(head);
    print(head);
    return 0;
}
