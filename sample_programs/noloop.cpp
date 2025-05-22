//looping numbers without using loop

#include<iostream>
using namespace std;
void no_loop(int n) {
  if(n>0) {
    cout<<n<<" ";
    no_loop(n-1);
  }

}

int main(){
  int n;
  cout<<"enter a num"<<endl;
  cin>>n;
  no_loop(n);
  return 0;
}

