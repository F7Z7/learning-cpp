#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int largest(int a, int b, int c, int d){
  int max = a;
  if(b>c && b>d && b>a){
    max = b;
    return max;
  }
  else if(c>d && c>b && c>a){
    max = c;
    return max;
  }
  else if(d>b && d>c && d>a){
    max = d;
    return max;
  }
  else return max;
}
int main() {
    int a,b,c,d;
      cin>>a>>b>>c>>d;
      int large =largest(a,b,c,d);
      cout<<large<<endl;
    return 0;
}
