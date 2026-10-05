#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;
int digitsum(string N){
    int sum=0;
    for(int i=0;i<N.length();i++){
        sum+=N[i]-'0';
    }
    return sum;
}
int main(){
    string N;
    while(cin>>N){
        int sum=0,degree=0;
        if(N=="0"){
            return 0;
        }
        sum=digitsum(N);
        degree++;
        while(sum>9){
            sum=digitsum(to_string(sum));
            degree++;
        }
        if(sum==9){
            cout<<N<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;
        }else{
            cout<<N<<" is not a multiple of 9."<<endl;
        }


    }
}