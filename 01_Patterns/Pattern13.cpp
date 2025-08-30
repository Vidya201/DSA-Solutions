#include <iostream>
using namespace std;
void print(int n){
    int start=1;
    for(int i=0;i<=n && start<=15;i++){
        for(int j=0;j<=i && start<=15 ; j++){
        cout<<start<<" ";
        start++;
    }
    cout<<endl;}

}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}

