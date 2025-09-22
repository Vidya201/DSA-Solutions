#include<iostream>
using namespace std;
int linear(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i; // return the index of the first occurrence
        }
    }
    return -1; // return -1 if not found
}
int main(){
    int arr[] = {1,3,4,5,3};
    int target = 3;
    int result = linear(arr, 5, target);
    cout << "First occurrence of " << target << " is at index: " << result << endl;
    return 0;
}