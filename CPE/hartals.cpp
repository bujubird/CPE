#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int N,P;
        cin>>N;
        cin>>P;
        int H[P];
        for(int i=0;i<P;i++){
            cin>>H[i];
        }
        int table[3655]={0};
        for(int i=0;i<P;i++){
            for(int j=1;j<=N;j++){
                if(j%H[i]==0 && j%7!=6 && j%7!=0){
                    table[j]=1;
                }
            }
        }
        int count=0;
        for(int i=0;i<=N;i++){
            if(table[i]==1){
                count++;
            }
        }
        cout<<count<<endl;
    }
}