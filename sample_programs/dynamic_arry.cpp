#include <iostream>
using namespace std;
int main(){

 int n;
 cout<<"Enter number of elements: ";
 cin>>n;
 int *arr = new int[n];
 cout<<"Enter elements: ";
 for (int i = 0; i < n; i++){
   cin>>arr[i];
 }
 cout<<"Array elements: ";
 for (int i = 0; i < n; i++){
   cout<<arr[i]<<"which was stored at address "<<&arr[i]<<endl;
 }

 int newSize=0;
 for (int i = 0; i < n; i++){
   if(arr[i]%2!=0){
arr[newSize++]=arr[i];
   }
 }
 cout<<"New array without even elements: ";
for (int i = 0; i < newSize; i++){
  cout<<arr[i]<<"stored at address "<<&arr[i]<<endl;
}
}