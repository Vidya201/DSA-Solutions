#include <iostream>
using namespace std;

void print5(int num) {
    for (int i = 1; i <=num; i++) {
        for (int j = 1; j <= num +1- i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    print5(n);
    return 0;
}