#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool is_sorted=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            is_sorted=false;
            break;}
    }
    if(is_sorted){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;

}