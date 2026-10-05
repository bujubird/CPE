#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        int displaynum=N;
        bool prime=true,emirp=true;
        for(int i=2;i<displaynum;i++){
            if(displaynum%i==0){
                prime=false;
                break;
            }
        }
        if(prime==true){
            int temp=0;
            while(N!=0){
                temp*=10;
                temp+=(N%10);
                N/=10;
            }
            for(int i=2;i<temp;i++){
                if(temp%i==0){
                    emirp=false;
                    break;
                }
            }
        }else{
            emirp=false;
        }
        if(prime==true && emirp==true){
            cout<<displaynum<<" is emirp"<<endl;
        }else if(prime==true && emirp==false){
            cout<<displaynum<<" is prime"<<endl;
        }else if(prime==false && emirp==false){
            cout<<displaynum<<" is not prime"<<endl;
        }
    }
}