//Optimal approach of ques 4 -->Remove duplicate from the array
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
for (int i =0 ;i<=n-1;i++){
int j =i;
while (j>0 && arr[j-1]>arr[j]){
 swap(arr[j],arr[j-1]);
 j--;
}
}
}


int remove_duplicate(int arr[],int n){
 int i =0;
for (int j=1;j<n;j++){
 if(arr[j]!=arr[i]){
  arr[i+1]=arr[j];
  i++;
 }
}
return (i+1);
}



int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i =0;i<n;i++){
  cin>> arr[i];
 }

insertion_sort(arr,n);
int last=remove_duplicate(arr,n);

for (int i =0;i<last;i++){
 cout<<arr[i]<<" ";
}






 return 0;
}
//TIME COMPLEXITY - 0(N)