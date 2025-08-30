#include<iostream>
using namespace std;
void straight_triangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void inverted_tyriangle(int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    straight_triangle(n);
    inverted_tyriangle(n);
    return 0;

}
