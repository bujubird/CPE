#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int T;
    string s;
    int table[26]={0};//000000000000000
    int max=0;
    cin>>T;
    getchar(); //過濾換行
    while(T--){
        getline(cin,s);
        for(int i=0;i<s.length();i++){ //000000000
            if('A'<=s[i]&&s[i]<='Z'){
                table[s[i]-'A']++;
                if(table[s[i]-'A']>max){
                    max=table[s[i]-'A'];
                }
            }
            if('a'<=s[i]&&s[i]<='z'){
                table[s[i]-'a']++;
                if(table[s[i]-'a']>max){
                    max=table[s[i]-'a'];
                }
            }
        }
    }
    for(int i=max;i>=1;i--){
        for(int j=0;j<26;j++){
            if(table[j]==i){//000000000000000
                cout<<char(j+'A')<<" "<<table[j]<<endl;
            }
        }
    }
}