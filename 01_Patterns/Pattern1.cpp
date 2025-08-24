#include<iostream>
using namespace std;

void print1(int n1){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int n1 = 4;
    print1(n1);
    return 0;
}