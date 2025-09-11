
// vector operations in c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Initialize vector with values
    vector<int> arr = {10, 20, 30, 40, 50};

    // Print all elements
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    // Create iterator pointing to beginning and print value
    vector<int>::iterator v = arr.begin();
    cout << *v; // Print the value pointed to by the iterator
    cout<<endl;

    // Insert 5 at the beginning
    arr.insert(arr.begin(), 5);

    // Insert 60 at the end
    arr.insert(arr.end(),60);

    // Print all elements after insertions
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    // Erase second element (index 1)
    arr.erase(arr.begin()+1);

    // Print all elements after erasure
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Add 10 at the end
    arr.push_back(10);

    // Print all elements after push_back
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Add 70 at the end using emplace_back
    arr.emplace_back(70);

    // Print all elements after emplace_back
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // ERROR: vector does not have push_front method
    // arr.push_front(1); // This line will cause a compilation error

    // Print all elements (this will not run due to error above)
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // Insert 80 at the end
    arr.insert(arr.end(),80);

    // Print all elements after final insertion
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}