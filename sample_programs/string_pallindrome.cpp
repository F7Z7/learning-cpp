#include <iostream>
using namespace std;
int pallindrome(string s,int l){
  if(l==0){
    return 1;
  }
  else if(l==1){
    return 2;
  }
  else{
    for(int i=0;i<l/2;i++){
      if(s[i]!=s[l-i-1]){

        break;
      }
      else{
        cout<<s<<"is palindrome"<<endl;
      }
    }

  }
}
int main(){
  string s;
  cout<<"Enter a string: ";
  cin>>s;
  int len=s.length();
pallindrome(s,len);
}