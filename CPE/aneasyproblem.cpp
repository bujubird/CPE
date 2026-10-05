#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
//pass
int main(){
    string s;
    while(cin>>s){
        int digit=0,max=1,N,sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]<='9' && s[i]>=0){
                digit=s[i]-'0';
            }else if(s[i]>='A' && s[i]<='Z'){
                digit=s[i]-'A'+10;
            }else if(s[i]>='a' && s[i]<='z'){
                digit=s[i]-'a'+36;
            }
            sum+=digit;
            if(digit>max){
                max=digit;
            }
        }
        for(N=max+1;N<=62;N++){
            if(sum%(N-1)==0){
                break;
            }
        }
        if(N<=62){
            cout<<N<<endl;
        }else{
            cout<<"such number is impossible!"<<endl;
        }
    }
}