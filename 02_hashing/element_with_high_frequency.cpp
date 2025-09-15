#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int maxfreq=0,maxele=0;
        for(auto it:mpp){
            int count=it.second;
            int element=it.first;
            if(count>maxfreq){
                maxfreq=count;
                maxele=element;
            }
            else if(count==maxfreq && element<maxele){
                maxele=element;

            }
            
        }
        return maxele;
        }
        


    
};