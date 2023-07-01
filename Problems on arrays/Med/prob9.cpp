#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> nums) {
        if(nums.size() == 0 ){
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int longest = 1;
        int last_smaller = INT_MIN;
        int count = 0;
        
        for(int i = 0;i < nums.size();i++){
            if(nums[i] -1 == last_smaller){
                count++;
                last_smaller= nums[i];
            }
            else if(nums[i] != last_smaller){
                count = 1;
                last_smaller=nums[i];
            }
            longest = max(longest, count);
        }
        return longest;
    }
    int main()
    {
        vector<int> arr{100,200,1,2,3,4};
        int lon=longestConsecutive(arr);
        cout<<"The longest consecutive sequence is "<<lon<<endl;
        
    }