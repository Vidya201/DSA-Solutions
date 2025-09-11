// numbers hashing

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        cout<<hash[q];
        cout<<endl;
    }
    delete[] arr;
    return 0;
}



    
    
    

