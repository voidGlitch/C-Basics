#include <bits/stdc++.h>
using namespace std;

/*Select the minimum and swap */
void selection_sort(int n ,int arr[]){
 
 for (int i =0;i<=n-2;i++){ // Outer loop
  int min = i;
  for (int j=i;j<=n-1;j++){ //Inner loop
   if(arr[j]<arr[min]) min=j;
  }
  swap(arr[min],arr[i]);
 }
}


/*Push the maximum at last by adjacent swapping */
void bubble_sort(int n , int arr[]){

 for (int i =n-1;i>=1;i--){  //Outer loop runs from (n-1) to 1 as we are pushing maximum at last and thereafter the max value is ignored
  for (int j=0;j<=i-1;j++){
   if(arr[j]>arr[j+1]) {
    // swap(arr[j],arr[j+1])
    //or
    int temp= arr[j+1];
    arr[j+1] = arr [j];
    arr[j]= temp;
   }
  }
 }

}

void insertion_sort(int n, int arr[]){
 for (int i =0 ;i<=n-1;i++){

  int j = i;

  while(j>0 && arr[j-1]>arr[j]){
   int temp = arr[j-1];
   arr[j-1]=arr[j];
   arr[j] = temp;

   j--;
  }
 }
}

//What is the difference between vector <int>arr--> Doesn't allow you to modify vector and vector<int>&arr --> allows you to modify ? 

void merge(vector<int> &arr,int low,int mid, int high){
 vector<int> temp;
 //[low......mid] --->left
 //[mid+1....high] --->right

 int left = low;
 int right= mid +1;
 while(left<=mid && right<=high){
  if(arr[left]<=arr[right]){
   temp.push_back(arr[left]);
   left++;
  }
  else{
   temp.push_back(arr[right]);
   right++;
  }
 }
  while(left<=mid){
   temp.push_back(arr[left]);
   left++;

  }
  while(right<=high){
   temp.push_back(arr[right]);
   right++;
   
  }

  for (int i = low; i<=high;i++){
   arr[i] = temp[i-low];
  }


 }

//Sort the element till we left with only one variable
void merge_sort(vector<int> &arr,int low, int high){  //Divide the vector into two parts
 if(low>= high) return ; //Base condition to end recurssion---> when only single variable left
 int mid = (low+high)/2;
 merge_sort(arr,low,mid); //Recursion
 merge_sort(arr,mid+1,high);
 merge(arr,low,mid,high);
}



/*DIVIDE AND CONQUOR APPROACH*/
int partition(vector<int> &arr,int low, int high){
 int pivot =  arr[low];
 int i = low;
 int j = high;
 while(i<j){
  while (arr[i]<=pivot && i<=high-1){
   i++;
  }
  while (arr[j]>pivot && j>=low+1){
   j--;
  }
  if(i<j){
   swap(arr[i],arr[j]);
  }
 }
swap(arr[low],arr[j]);
return j; 
}
void quick_sort(vector<int> &arr,int low,int high){
  if(low<high){
   int pIndex= partition(arr,low,high);
   quick_sort(arr,low,pIndex-1);
   quick_sort(arr,pIndex+1,high);
  }
}



int main(){
 int n;
 cin>>n;
 vector <int> arr;
 for (int i=0;i<n;i++){
  int num;
  cin>>num;
  arr.push_back(num);
 }

quick_sort(arr,0,n-1);

// merge_sort(arr,0,n-1);

 for(int i =0;i<n;i++){
  cout<<arr[i] << " ";
 }
 
}