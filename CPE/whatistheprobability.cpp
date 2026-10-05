#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
using namespace std;
int main(){
    int testcase;
    int N,winner;
    double p;
    cin>>testcase;
    while(testcase--){
        cin>>N>>p>>winner;
        double q=1-p;
        if(p==0){
            cout<<"0.0000"<<endl;
        }else{
            double a=pow(q,winner-1);
            double r=pow(q,N);
            double ans=(a*p)/(1.0-r);
            cout<<fixed<<setprecision(4)<<ans<<endl;
        }
    }
}