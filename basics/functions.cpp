#include <iostream>
using namespace std;

int add(int a,int b){
return a+b;
}
int sub(int a,int b) {
  return a-b;
}
int mul(int a,int b) {
  return a*b;
}
int division(int a,int b) {
 return a/b;
}


int main() {
  int a,b,sum,selection;
  cout<<"enter first num"<<endl;
  cin>>a;
  cout<<"enter second num"<<endl;
  cin>>b;
  cout<<"Enter your operation :1:add,2:sub,3:mul ,4:div"<<endl;
  cin>>selection;
  if(selection==1) {
    sum=add(a,b);
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
  }
  else if(selection==2) {
    int diff=sub(a,b);
    cout<<"The diff of "<<a<<" and "<<b<<" is "<<diff<<endl;
  }
  else if(selection==3) {
    int pro=mul(a,b);
    cout<<"The product is "<<pro<<endl;

  }
  else if(selection==4) {
    if (b==0) {
      cout<<"Division by zero"<<endl;
    }
    else {
      int div=division(a,b);
      cout<<"The quotient is "<<div<<endl;
    }
  }
}