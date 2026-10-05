#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int testcase,casenum=1;
    cin>>testcase;
    while(testcase--){
        int n1=0,n2=0;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<a.length();i++){
            int num_a=a[i]-'0';
            n1+=num_a*pow(2,a.length()-i-1);
        }
        for(int i=0;i<b.length();i++){
            int num_b=b[i]-'0';
            n2+=num_b*pow(2,b.length()-i-1);
        }
        if(gcd(n1,n2)!=1){
            cout<<"Pair #"<<casenum<<": All you need is love!"<<endl;
        }else{
            cout<<"Pair #"<<casenum<<": Love is not all you need!"<<endl;
        }
        casenum++;
    }
}