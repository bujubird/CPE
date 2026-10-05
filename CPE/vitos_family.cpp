#include <iostream>
#include <algorithm>
using namespace std;
//算中位數 mid=s[i][r/2]
int main(){
    int testcase,r;
    cin>>testcase;
    int s[testcase][3000];
    int result[testcase];
    for(int i=0;i<testcase;i++){
        result[i]=0;
        cin>>r;
        for(int j=0;j<r;j++){
            cin>>s[i][j];
        }
        sort(s[i],s[i]+r);
        int mid=s[i][r/2];
        for(int j=0;j<r;j++){
            result[i]+=abs(mid-s[i][j]);
        }
    }
    
    for(int i=0;i<testcase;i++){
        cout<<result[i]<<endl;
    }
}