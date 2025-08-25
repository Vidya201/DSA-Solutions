#include <iostream>
using namespace std;

void print5(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    print5(n);
    return 0;
}