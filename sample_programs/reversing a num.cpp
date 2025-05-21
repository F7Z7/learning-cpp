#include <iostream>
using namespace std;
//code for reversing a num,for loop based
int main(){
int num,temp,reverse=0,i,num_stor;
cout<<"Enter a number"<<endl;
cin>>num;
  num_stor=num;
while(num!=0){
  temp=num%10;
  reverse=reverse*10+temp;
  num=num/10;
}
  if (reverse==num_stor) {
    cout<<"The number is pallindorm"<<endl;
  }
  //we can modify this by adding another condion to check if its  appllindrome
cout<<"Rversed number is "<<reverse<<endl;

}