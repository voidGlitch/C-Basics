 /*Left rotate by P places*/
 #include<bits/stdc++.h>
 using namespace std;


 void reverse_d(int d,int arr[],int n){
  d=d%n;
  int temp[d];
  for(int i=0;i<d;i++){
   temp[i]=arr[i];
  }

 //shifting
  for (int i=d;i<n;i++){
 arr[i-d]=arr[i];
  }

 //Putting back terms
 for(int i=n-d;i<n;i++){
  arr[i]= temp[i-(n-d)];
 }
 }

 int main(){
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
  cin>>arr[i];
 }
 cout<<"your array is : ";
 for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl<<"For how may places you want to shift? : ";
  int d;
  cin>>d;

 reverse_d(d,arr,n);

 for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
 }
  return 0;
 } 
 //TIME COMPLEXITY : 0(N+D)