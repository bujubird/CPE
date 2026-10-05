#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std; 
int main(){
    string s;
    int testcase;
    cin>>testcase;
    getline(cin, s); // 把數字後面的換行吃掉
    getline(cin, s); // 把第一組測資前的空行吃掉
    while(testcase--){
        map <string, int> mp;
        int sum=0;
        while(getline(cin,s) && s != ""){
            mp[s]++;
            sum++;
        }
        for(auto i:mp){
            cout<<i.first<<" "<<fixed<<setprecision(4)<<(double)i.second/sum*100<<endl;
        }
    }
}