#include<iostream>
using namespace std;

int main() {
    int arr[6] = {0, 1, 4, 0, 5, 2};
    int n = 6;
    int count = 0; // Count of non-zero elements

    // Traverse the array. If element is non-zero, put it at 'count' index
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill remaining positions with 0
    while (count < n) {
        arr[count++] = 0;
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
