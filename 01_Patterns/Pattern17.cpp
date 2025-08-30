#include<iostream>
using namespace std;

void print(int n) {
    for(int i = 0; i < n; i++) {
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // Print increasing characters
        for(int j = 0; j <= i; j++) {
            cout << char('A' + j);
        }
        // Print decreasing characters
        for(int j = i - 1; j >= 0; j--) {
            cout << char('A' + j);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}
