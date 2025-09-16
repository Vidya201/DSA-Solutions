#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,7,9,1,2,4};
    int n=6;
    int largest=arr[0],slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){   
        if(arr[i]>slargest && arr[i]<largest){
            slargest=arr[i];
        }

    }

    cout<<largest<<endl;
    cout<<slargest;
    return 0;
}