/*2 Sum problem*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
 vector<int>nums={-2,-3,4,-1,-2,1,5,-3};
   int sum=0;
    int maxi = INT_MIN;
    int start=-1;
    int ansstart=-1;
    int ansend=-1;
    for(int i =0;i<nums.size();i++){
     if(sum==0) start=i;

     sum=sum+nums[i];

     if(sum>maxi){
       maxi=sum;
       ansstart=start;
       ansend=i;
     }

     if(sum<0) sum=0;
    }
    cout<<"Maximum sum of subarray formed is: "<<maxi<<endl;
    cout<<"It starts from index : "<<ansstart<<" to "<<ansend;
    return 0;
}
