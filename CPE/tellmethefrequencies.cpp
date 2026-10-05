#include <iostream>
#include <string> 
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    string s;
    bool flag=1;
    while(getline(cin,s)){
        if(!flag){
            cout<<endl;
        }
        flag=0;
        int table[96]={0};
        for(int i=0;i<s.length();i++){
            for(int j=0;j<96;j++){
                if(s[i]==j+32){
                    table[j]++;
                }
            }
        }
        int fre[96];
        int cha[96];
        int count=0;
        for(int i=0;i<96;i++){
            fre[i]=table[i];
            cha[i]=i+32;
            count++;
        }
        for(int i=0;i<count-1;i++){
            for(int j=0;j<count-1;j++){
                if(fre[j]>fre[j+1]){
                    swap(fre[j],fre[j+1]);
                    swap(cha[j],cha[j+1]);
                }else if(fre[j]==fre[j+1]){
                    if(cha[j]<cha[j+1]){
                        swap(fre[j],fre[j+1]);
                        swap(cha[j],cha[j+1]);
                    }
                }

            }
        }
        for(int i = 0; i < count; i++){
            if(fre[i]>0){
                cout << cha[i] << " " << fre[i] << endl;
            }
        }
    }
}