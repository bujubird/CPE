#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//pass
int main(){
    int a,b;
    int count;
    while(cin>>a>>b){
        count=0;
        if(a==0 && b==0){
            return 0;
        }
        for(int i=a;i<=b;i++){
            int sq=sqrt(i);
            if(sq*sq==i){
                count++;
            }
        }
        cout<<count<<endl;
    }
}