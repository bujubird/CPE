#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//pass zerojudge
int main(){
    int I=0;
    while(cin>>I){
        int P=0;
        string s="";
        if(I==0){
            return 0;
        }
        while(I!=0){
            if(I%2==1){
                P++;
                s="1" + s;
            }else{
                s="0" + s;
            }
            I/=2;
        }
        cout<<"The parity of "<<s<<" is "<<P<<" (mod 2)."<<endl;
    }
}