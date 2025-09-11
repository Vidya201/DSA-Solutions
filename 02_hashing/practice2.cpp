#include<iostream>
using namespace std;
int main(){
    string s="mAnjunatha";
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        char ch = tolower(s[i]);
        hash[ch-'a'] += 1;
    }
    char l;
    cout<<"enter letter: "<<endl;
    cin>>l;
    cout << hash[l-'a'] << endl;
    
    return 0;
}