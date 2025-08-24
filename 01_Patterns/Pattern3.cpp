#include<iostream>
using namespace std;
void print3(int n3){
    for(int i=1; i<=n3; i++){
        for(int j=0; j<i; j++){
            cout << i;
        }
        cout << endl;
    }
}
int main(){
    int n3=5;
    print3(n3);
    return 0;
}