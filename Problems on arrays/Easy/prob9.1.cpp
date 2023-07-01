/*Find union of two arrays*/
 #include<bits/stdc++.h>
 using namespace std;

vector <int> FindUnion(int arr1[],int arr2[],int n1,int n2){
 int i=0;
 int j=0;
 vector<int> Union;
 while(i<n1 && j<n2){
  if(arr1[i]<=arr2[j])
  {
    if(Union.size() == 0 || Union.back() != arr1[i]){

        Union.push_back(arr1[i]);
    }
    i++;
  }
  else{
   if(Union.size()==0 || Union.back() != arr2[j]){

    Union.push_back(arr2[j]);
   }
   j++;
  }
 }

while(i<n1){
 if(Union.size()==0 || Union.back() != arr1[i]){

        Union.push_back(arr1[i]);
 }
    i++;
}
while(j<n2){
 if(Union.size()==0 || Union.back() != arr2[j]){

        Union.push_back(arr2[j]);
 }
    j++;
}

return Union;

}



 int main(){
int arr1[]={1,1,2,3,4,5};
int arr2[]={2,3,4,4,5,6};
 int n1=6;
 int n2=6;

  vector < int > Union = FindUnion(arr1, arr2, n1, n2);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
 } 
 //TIME COMPLEXITY : 0(N1logN1)+0(N2logN2)+0(N1+N2)

