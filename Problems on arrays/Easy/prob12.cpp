#include <bits/stdc++.h>
using namespace std;




int main()
{
    int N = 5;
    vector<int> a = {1, 1,0,1,1,1,1,1,0,1,1};
   
   int maxi=0;
   int count=0;

   for(int i =0;i<a.size();i++){
    if(a[i]==1){
     count++;
     maxi=max(maxi,count);
    }
    else{
     count=0;
    }
   }
    cout << "consecutive 1's are: " << maxi << endl;
    return 0;
}