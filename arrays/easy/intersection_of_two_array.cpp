#include <iostream>
using namespace std;

int main() {
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    int nums3[100]; // Temporary array for intersection
    int k = 0;

    bool used[100] = {false}; // To avoid duplicates in nums1

    for (int i = 0; i < n1; i++) {
        if (used[i]) continue; // Skip if already used
        for (int j = 0; j < n2; j++) {
            if(used[j]) continue;
            if (nums1[i] == nums2[j]) {
                nums3[k++] = nums1[i];
                used[i] = true;
                used[j]=true;
                break; // Move to next element in nums1
            }
        }
    }

    cout << "Intersection: ";
    for (int i = 0; i < k; i++) {
        cout << nums3[i] << " ";
    }
    cout << endl;

    return 0;
}