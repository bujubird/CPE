#include <iostream>
#include <string>
using namespace std;
//奇數-偶數的差%11==0就是11的倍數
int main(){
    string N;
    while(cin>>N){
        if(N=="0"){
            return 0;
        }
        int len=N.length();
        int odd=0,even=0;
        for(int i=0;i<len;i++){
            if(i%2==0){
                even+=(N[i]-'0');
            }else{
                odd+=(N[i]-'0');
            }
        }
        int result=abs(odd-even);
        if(result%11==0){
            cout<<N<<" is a multiple of 11"<<endl;
        }else{
            cout<<N<<" is not a multiple of 11"<<endl;
        }
    }
}