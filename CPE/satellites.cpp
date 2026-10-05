#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    double s,a,pi=3.1415926;
    string str;
    while(cin>>s>>a>>str){
        double r=s+6440;
        if(str=="min"){
            a/=60;
        }
        while(a>=360){
            a-=360;
        }
        if(a>=180){
            a=360-a;
        }
        double arc,chord;
        double rad=a*(pi/180.0);
        arc=r*rad;
        chord=2.0*r*sin(rad/2.0);
        cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
    }
}