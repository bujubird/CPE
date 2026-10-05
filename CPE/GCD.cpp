#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main(){
    int N;
    while(cin>>N){
        if(N==0){
            return 0;
        }
        int G=0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++){
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;
    }
}