#include<bits/stdc++.h>
using namespace std;
int main() {
  int a[] = {1,2,2,3,4,1,3,1};
  unordered_map < int, int > mpp;
  for (int i = 0; i < 8; i++) {
    mpp[a[i]]++;
  }
  int maxFreq = INT_MIN;
  int minFreq = INT_MAX;
  int maxEle = -1, minEle = -1;

for(auto e: mpp){
  cout<<e.first<<"-->"<<e.second<<endl;
}

  for (auto e: mpp) {
    if (e.second > maxFreq) {
      maxEle = e.first; //which number comes
      maxFreq = e.second;//how many times
    }
    if (e.second < minFreq) {
      minEle = e.first;
      minFreq = e.second;
    }
  }
  cout <<"MAX ELEMENT IS  "<< maxEle <<" which comes "<<maxFreq<<" times" <<endl<<"MIN ELEMENT IS " << " " << minEle <<" which comes "<<minFreq<<" times"<<endl;
  
}