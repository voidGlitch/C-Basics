#include <bits/stdc++.h>
using namespace std;

int brute(vector<int>&a, int N) {

    // Outer loop that runs from 1 to N:
    for (int i = 1; i <= N; i++) {

        // flag variable to check
        //if an element exists
        int flag = 0;

        //Search the element using linear search:
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {

                // i is present in the array:
                flag = 1;
                break;
            }
        }

        // check if the element is missing
        //i.e flag == 0:

        if (flag == 0) return i;
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}

int better(vector<int> &a,int N){
 int hash[N+1]={0};
 for(int i=0;i<N-1;i++){
  hash[a[i]]++;
 }
 for(int i =1;i<=N;i++){
  if(hash[i]==0){
   return i;
  }
 }
}

int optimal(vector<int> &a,int N){
 int sum = N *(N+1)/2;
 int s2=0;
 for(int i=0;i<a.size();i++){
s2+=a[i];
 }


if(sum==s2){
 return 0;
}
return (sum-s2);

}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    // int ans = brute(a, N);
    // int ans = better(a, N);
    int ans = optimal(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}