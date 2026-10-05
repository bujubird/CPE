#include <iostream>
#include <iomanip>
using namespace std;
//這題要用遞迴寫最快最省時間
void bangla(long long int inputnum){
    if(inputnum>=10000000){
        bangla(inputnum/10000000);
        cout<<" kuti";
        inputnum%=10000000;
    }
    if(inputnum>=100000){
        cout<<" "<<inputnum/100000<<" lakh";
        inputnum%=100000;
    }
    if(inputnum>=1000){
        cout<<" "<<inputnum/1000<<" hajar";
        inputnum%=1000;
    }
    if(inputnum>=100){
        cout<<" "<<inputnum/100<<" shata";
        inputnum%=100;
    }
    if(inputnum>0){
        cout<<" "<<inputnum;
    }
}
int main(){
    long long int inputnum;
    int testcase=1;
    while(cin>>inputnum){
        cout<<testcase<<". ";
        if(inputnum==0){
            cout<<"0"<<endl;
        }else{
            bangla(inputnum);
            cout<<endl;
            
        }
        testcase++;
    }
}