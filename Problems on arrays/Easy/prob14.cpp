/*Longest subarray with sum k */
#include <bits/stdc++.h>
using namespace std;

int brute(vector<int> &arr,int k ) {
 int length= 0 ;
   for(int i=0;i<arr.size();i++){
    long long sum =0 ;
    for(int j =i;j<arr.size();j++){
sum +=arr[j];
if(sum == k){
length = max(length,j-i+1);
}
    }
   }
   return length;
}

int better(vector<int> &a,int k) {

  int n = a.size(); // size of the array.

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int optimal(vector<int> &a,int k) {
int n = a.size(); // size of the array.

    int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward thw right pointer:
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
   
}

int main()
{
    vector<int> arr = {1,2,3,1,1,2,2,3};
    int k =3;
    // int ans = brute(arr,k);
    // int ans = better(arr,k);
    int ans = optimal(arr,k);
    cout << "The Length of subarray is: " << ans << endl;
    return 0;
}