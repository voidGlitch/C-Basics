/*Left rotate arraya by one place*/
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
 for (int i =0; i<=n-1;i++){
  int j =i;
  while(j>0 && arr[j-1]>arr[j]){
   swap(arr[j],arr[j-1]);
   j--;
  }
 }


}




int main(){

int n;
cin >>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
}

insertion_sort(arr,n);
cout<<"Sorted array--> ";
for (int i=0;i<n;i++){
 cout<< arr[i]<<" ";
}
cout<<endl;

int temp = arr[0];
for (int i=0;i<n;i++){
 arr[i-1]=arr[i];
}
arr[n-1]=temp;

cout<<"Array after displacing by 1 place value--> ";
for (int i=0;i<n;i++){
 cout<< arr[i]<<" ";
}
cout<<endl;


 return 0;
}

//TIME COMPLEXITY = 0(N)