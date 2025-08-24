#include<iostream>
using namespace std;
void print3(int n4){
    for(int i=1; i<=n4; i++){
        for(int j=1; j<i; j++){
            cout << j;
        }
        cout << endl;
    }
}
int main(){
    int n4=6;
    print3(n4);
    return 0;
}