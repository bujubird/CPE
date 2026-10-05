#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
//PASS
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int N;
        cin>>N;
        int X1=N,X2=N,b1=0,b2=0;
        while(X1!=0){
            if(X1%2==1){
                b1++;
            }
            X1/=2;
        }
        while(X2!=0){
            int temp=X2%10;
            while(temp!=0){
                if(temp%2==1){
                    b2++;
                }
                temp/=2;
            }
            X2/=10;
        }
        cout<<b1<<" "<<b2<<endl;
    }
}