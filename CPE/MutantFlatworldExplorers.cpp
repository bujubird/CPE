#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    int map[55][55]={0};
    int x,y,pre_x,pre_y;
    char dir;
    string action;
    while(cin>>x>>y>>dir>>action){
        bool flag=1;
        for(int i=0;i<action.length();i++){
            if(action[i]=='R'){
                if(dir=='N'){
                    dir='E';
                }else if(dir=='E'){
                    dir='S';
                }else if(dir=='W'){
                    dir='N';
                }else if(dir=='S'){
                    dir='W';
                }
            }else if(action[i]=='L'){
                if(dir=='N'){
                    dir='W';
                }else if(dir=='E'){
                    dir='N';
                }else if(dir=='W'){
                    dir='S';
                }else if(dir=='S'){
                    dir='E';
                }
            }else if(action[i]=='F'){
                pre_x = x;
                pre_y = y;
                if(dir=='N'){
                    y++;
                }else if(dir=='E'){
                    x++;
                }else if(dir=='W'){
                    x--;
                }else if(dir=='S'){
                    y--;
                }
            }
            if(x<0 || y<0 || y>w || x>h){
                x=pre_x;
                y=pre_y;
                if(map[x][y]==1){
                    continue;
                }
                map[x][y]=1;
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<x<<" "<<y<<" "<<dir<<endl;
        }else{
            cout<<x<<" "<<y<<" "<<dir<<" LOST"<<endl;
        }
    }
}