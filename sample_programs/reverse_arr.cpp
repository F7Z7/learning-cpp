#include<iostream>
using namespace std;
void reverse(int arr[], int size)
{
for(int i=0;i<size;i++){
cout<<arr[size-i-1]<<" ";
}
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  reverse(arr,n);
}