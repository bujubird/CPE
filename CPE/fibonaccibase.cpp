#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
//pass
int main(){
    int testcase;
    cin>>testcase;
    int fib[40]={0,1};
    for(int i=2;i<40;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    while(testcase--){
        int N,flag=0;
        cin>>N;
        cout<<N<<" = ";
        for(int i=39;i>1;i--){
            if(N>=fib[i]){
                N-=fib[i];
                flag=1;
                cout<<"1";
            }else if(flag==1){
                cout<<"0";
            }
        }
        cout<<" (fib)"<<endl;
    }
}