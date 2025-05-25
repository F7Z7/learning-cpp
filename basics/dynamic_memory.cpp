#include <iostream>
using namespace std;
int main(){
  // int *arr;
  // arr=new int(6);
  // cout<<arr<<endl;//print the addres
  // cout<<*arr<<endl;//print the stored int
  int n;
  cout<<"enter the size of array"<<endl;
  cin>>n;
  int *arr= new int[n];
  cout<<"enter the elements of array"<<endl;
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }
  cout<<"array after deleting elements with the addres they were stored"<<endl;
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" which was stored in "<< &arr[i]<<endl;
  }
  delete arr;
  return 0;


}