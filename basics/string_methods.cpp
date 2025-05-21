#include <iostream>
#include <string>
using namespace std;
int main(){
string s="Hey You";
    int len=s.length();//same can be used for str.size()
    cout<<"THe lenght of string is "<<len<<endl;
cout << s[4] << endl;//accesing a single char
s[5]='a';
    cout<<s<<endl; //now the that specific word will be replaced
    //appending two strings
    string new_Str="Hello";
    string new_Str2="WOrld";
    cout<<new_Str +' '+ new_Str2<<endl; //simlar to ptython,string conctatenation is common to both numbers na dstings
}
//other notable methods
/*
 *substr()= used for extracting  aspecific part
 */