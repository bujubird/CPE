#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std; 
int main(){
    int h,w;
    int testcase=1;
    bool flag=1;
    while(cin>>h>>w){
        if(h==0 && w==0){
            return 0;
        }
        char map[h][w];
        int table[h][w];
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>map[i][j];
                table[i][j]=0;
            }
        }
        int dv[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dh[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(map[i][j]=='*'){
                    for(int k=0;k<8;k++){
                        int ni=i+dv[k];
                        int nj=j+dh[k];
                        if(ni>=0 && ni<h && nj>=0 && nj<w){
                            table[ni][nj]++;
                        }
                    }
                }
            }
        }
        if(!flag){
            cout<<endl;
        }
        flag=false;
        cout<<"Field #"<<testcase<<": "<<endl;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(map[i][j]=='*'){
                    cout<<"*";
                }else{
                    cout<<table[i][j];
                }
            }
            cout<<endl;
        }
        testcase++;
    }
}