/*Linear search*/
#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int n,int num){
 for (int i=0;i<n;i++){
  if(arr[i]==num){
   return i;
  }
 }
 return -1;
}


int main(){
int n = 7;
int arr[]= { 1,2,0,5,0,6,0};
int num;
cin>>num;
int z = linearsearch(arr,n,num);
cout<<z;


}

//time complexity-0(2n)