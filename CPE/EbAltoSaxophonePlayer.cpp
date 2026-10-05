#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std; 
int main(){
    int testcase;
    cin>>testcase;
    cin.ignore();
    map <char,string>finger={ 
        {'c',"0111001111"},{'d',"0111001110"},
        {'e',"0111001100"},{'f',"0111001000"},
        {'g',"0111000000"},{'a',"0110000000"},
        {'b',"0100000000"},{'C',"0010000000"},
        {'D',"1111001110"},{'E',"1111001100"},
        {'F',"1111001000"},{'G',"1111000000"},
        {'A',"1110000000"},{'B',"1100000000"}
    };
    while(testcase--){
        string song,present;
        getline(cin,song);
        present="0000000000";
        int count[10]={0};

        for(const auto& i:song ){
            for(int j=0;j<10;j++){
                int cur=finger[i][j]-'0';
                int pre=present[j]-'0';
                count[j]+=max(0,cur-pre);
            }
            present=finger[i];
        }

        for(int i=0;i<10;i++){
            cout<<count[i]<<" ";
        }
        cout<<endl;
    }
    
}