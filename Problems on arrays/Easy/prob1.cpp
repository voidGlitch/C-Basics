/*Find the largest number in the given array*/
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

int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i =0;i<n;i++){
  cin>> arr[i];
 }

 // insertion_sort(arr,n);  Brute tc-->NlogN

int largest = arr[0];
for (int i =0 ;i<n;i++){
 if(arr[i]>largest){
  largest=arr[i];
 }
}

// cout<<"THE LARGEST ELEMENT IN THE ARRAY IS: "<<arr[n-1]<<" ";
cout<<"THE LARGEST ELEMENT IN THE ARRAY IS: "<<largest<<" ";  




 return 0;
}