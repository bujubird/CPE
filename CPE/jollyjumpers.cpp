#include <algorithm>
#include <iostream>
#include <cmath>
#include <map>
using namespace std;
//PASS
int main(){
    int num[3000];
    int digit;
    while(cin>>digit){
        for(int i=0;i<digit;i++){
            cin>>num[i];
        }
        int dif[digit-1];
        for(int i=0;i<digit-1;i++){
            dif[i]=abs(num[i]-num[i+1]);
        }
        bool isjolly=true;
        sort(dif,dif+digit-1);
        for(int i=0;i<digit-1;i++){
            if(dif[i]!=i+1){
                isjolly=false;
            }
        }
        if(isjolly==true){
            cout<<"Jolly"<<endl;
        }else{
            cout<<"Not jolly"<<endl;
        }
    }
}