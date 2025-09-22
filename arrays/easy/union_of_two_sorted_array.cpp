#include<iostream>
using namespace std;

int main() {
    int nums1[] = {1,2,3,4,5};
    int nums2[] = {1,2,6,7,8};
    int n1 = sizeof(nums1)/sizeof(nums1[0]);
    int n2 = sizeof(nums2)/sizeof(nums2[0]);

    int i = 0, j = 0;

    while(i < n1 && j < n2) {
        if(nums1[i] < nums2[j]) {
            cout << nums1[i] << " ";
            i++;
        } else if(nums1[i] > nums2[j]) {
            cout << nums2[j] << " ";
            j++;
        } else {
            cout << nums1[i] << " ";
            i++;
            j++;
        }
    }
    // Print remaining elements
    while(i < n1) {
        cout << nums1[i] << " ";
        i++;
    }
    while(j < n2) {
        cout << nums2[j] << " ";
        j++;
    }
    return 0;
}