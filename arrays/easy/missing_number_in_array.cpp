#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,1,3,4,2};
    int n=6,min;
    min=arr[0];
    bool sort[6]={};
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=min;i<n;i++){
        cout<<min;
        sort[min];
        min++;
    }
    for(int i=0;i<n;i++){
        if(sort[i]) continue;
        cout<<sort[i];
    }
    

    return 0;
}