#include <iostream>
#include <string>
#include <cmath>
//hard
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int M,N,q;
        cin>>M>>N>>q;
        cout<<M<<" "<<N<<" "<<q<<endl;
        string table[150];
        for(int i=0;i<150;i++){
            cin>>table[i];
        }
        while(q--){
            int r,c,width=1,n=0;
            cin>>r>>c;
            bool flag=true;
            while(flag){
                n++;
                for(int i=r-n;i<=r+n&&flag==true;i++){
                    for(int j=c-n;j<=c+n&&flag==true;j++){
                        if(i<0||j<0||i>=M||j>=N){
                            flag=false;
                        }else if(table[i][j]!=table[r][c]){
                            flag=false;
                        }
                    }
                }
                if(flag==true){
                    width+=2;
                }
            }
            cout<<width<<endl;
        }

    }
}