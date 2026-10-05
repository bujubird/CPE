#include <iostream>
#include <cmath>
#include <string>
#include <map>
using namespace std;
//PASS
// 超難 注意map用法
int main(){
    int T;
    string s;
    map<string,int> mp;
    cin>>T;
    while(T--){
        cin>>s;
        mp[s]++;
        getline(cin,s);
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}