#include <iostream>
#include <string>
#include <cmath>
#include <map>
using namespace std;
//PASS
int main(){
    string s1="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s2;
    string s3;
    while(getline(cin,s2)){
        for(int i=0;i<s2.length();i++){
            if(s2[i]>='A'&&s2[i]<='Z'){
                s2[i]=s2[i]-'A'+'a';
            }
            for(int j=0;j<s1.length();j++){
                if(s2[i]==s1[j]){
                    s2[i]=s1[j-2];
                }
            }
        }
        cout<<s2<<endl;
    }
}