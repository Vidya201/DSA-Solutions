#include<iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6, k = 2;

    // Store first k elements in temp array
    int temp[2];
    for(int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the rest of the elements to the left
    for(int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    // Put the stored elements at the end
    for(int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}