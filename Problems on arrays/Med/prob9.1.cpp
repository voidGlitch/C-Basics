#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> nums) {
        int n= nums.size();
        if(n== 0 ){
            return 0;
        }
        int longest =1;
        set <int> st;
        for(int i=0;i<n;i++){
         st.insert(nums[i]);
        }

        for(auto it: st){
         if(st.find(it-1)==st.end()){
          int count =1;
          int x =it;
          while(st.find(x+1) != st.end()){
           x=x+1;
           count++;
          }
          longest=max(longest,count);
                   }
        }
        return longest;
      
    }
    int main()
    {
        vector<int> arr{100,200,105,1,2,3,4,101,102,103,104};
        int lon=longestConsecutive(arr);
        cout<<"The longest consecutive sequence is "<<lon<<endl;
        
    }