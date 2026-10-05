#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
//pass
int main(){
    string a,b;
    int table_a[26],table_b[26];
    while(getline(cin,a)){
        getline(cin,b);
        int table_a[26]={0},table_b[26]={0};
        for(int i=0;i<a.length();i++){
            if(a[i]>='a' && a[i]<='z'){
                table_a[a[i]-'a']++;
            }
        }
        for(int i=0;i<b.length();i++){
            if(b[i]>='a' && b[i]<='z'){
                table_b[b[i]-'a']++;
            }
        }
        string result;
        for(int i=0;i<26;i++){
            int minnum=min(table_a[i],table_b[i]);
            for(int j=0;j<minnum;j++){
                result+= 'a'+i;
            }
        }
        cout<<result<<endl;
    }
}