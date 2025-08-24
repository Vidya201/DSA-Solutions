#include<iostream>
using namespace std;

void print2(int n2){
    for(int i=1; i<=n2; i++){
        for(int j=0; j<i; j++){
            cout<< "*";
        }
        cout<< endl;
    }
}
int main(){
    int n2 = 5;
    print2(n2);
    return 0;
}