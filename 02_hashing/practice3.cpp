#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]+=1;

        }
        vector<vector<int>> result;
        for(auto it:mpp){
            result.push_back({it.first,it.second});
        }
        return result;

        
        // Your code goes here
    }
};
int main(){
    Solution obj;
    vector<int> nums = {1,1,2,2,2,3};
    vector<vector<int>> result = obj.countFrequencies(nums);
    for(auto it:result){
        cout<<it[0]<<" "<<it[1]<<endl;
    }
    return 0;

    
}