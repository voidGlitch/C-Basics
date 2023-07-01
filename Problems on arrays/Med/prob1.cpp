/*2 Sum problem*/
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum2(int n, vector<int> &arr, int target) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { -1, -1};
}

string twoSum1(int n, vector<int> &arr, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> sum = twoSum2(n, arr, target);
    string ans = twoSum1(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    cout << "This is the answer for variant 2: [" << sum[0] << ", "
         << sum[1] << "]" << endl;
    return 0;
}


/*brute force
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   if(i==j) continue;
   if(arr[i]+arr[j]==target){
    cout<<"Yes! two indexes are: "<< i<<j<<endl;
    break;
   }
  }
 }*/
 