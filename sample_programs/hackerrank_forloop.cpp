#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string arr[9]={ "one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cout<<"Enter 2 numbers ";
    cin>>a;
    cin>>b;

for(int i=a;i<b;i++){
  cout<<arr[i-1]<<endl;

}



    return 0;
}