#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std; 
int main(){
    int n;
    while(cin>>n){
        if(n==0){
            return 0;
        }
        map <string, int> mp;
        mp["top"]=1;
        mp["north"]=2;
        mp["west"]=3;
        mp["east"]=4;
        mp["south"]=5;
        mp["bottom"]=6;
        while(n--){
            string s;
            cin>>s;
            if(s=="east"){
                int temp;
                temp=mp["east"];
                mp["east"]=mp["top"];
                mp["top"]=mp["west"];
                mp["west"]=mp["bottom"];
                mp["bottom"]=temp;
            }else if(s=="north"){
                int temp;
                temp=mp["north"];
                mp["north"]=mp["top"];
                mp["top"]=mp["south"];
                mp["south"]=mp["bottom"];
                mp["bottom"]=temp;
            }else if(s=="west"){
                int temp;
                temp=mp["west"];
                mp["west"]=mp["top"];
                mp["top"]=mp["east"];
                mp["east"]=mp["bottom"];
                mp["bottom"]=temp;
            }else if(s=="south"){
                int temp;
                temp=mp["south"];
                mp["south"]=mp["top"];
                mp["top"]=mp["north"];
                mp["north"]=mp["bottom"];
                mp["bottom"]=temp;
            }
        }
        cout<<mp["top"]<<endl;
    }
}