/*Next permutation*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
 vector<int>a={2,1,5,4,3,0,0};
 int index=-1;
 int n = a.size();
  for(int i=n-2;i>=0;i--){
   if(a[i]<a[i+1]){
    index =i;
    break;
   }
  }
  if(index==-1){
   reverse(a.begin(),a.end());
   for(auto it:a){
   cout<<it<<" ";
  }
  return 0;
  }

  for(int i =n-1;i>=index;i--){
   if(a[i]>a[index]){
    swap(a[i],a[index]);
    break;
   }
  }

  reverse(a.begin()+index+1,a.end());

  for(auto it:a){
   cout<<it<<" ";
  }
    return 0;
}
//Time complexity-0(N)