#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void sum_diff (int *a, int *b,int *sum,int *diff){
  *sum=*a+*b;
  *diff=abs(*a-*b);

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    cin>>a>>b;
    int *ptrA=&a;
    int *ptrB=&b;
    int sum,diff;
    sum_diff(ptrA,ptrB,&sum,&diff);
    cout<<sum<<endl;
    cout<<diff<<endl;
    return 0;
}
