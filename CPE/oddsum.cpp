#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//PASS ZEROjudge
int main(){
    int testcase,digit=0;
    int oddsum[100]={0};
    cin>>testcase;
    int finalcase=testcase;
    while(testcase--){
        int a,b;
        cin>>a;
        cin>>b;
        for(int i=a;i<=b;i++){
            if(i%2!=0){
                oddsum[digit]+=i;
            }
        }
        digit++;
    }
    for(int i=0;i<finalcase;i++){
        cout<<"Case "<<i+1<<": "<<oddsum[i]<<endl;
    }
}