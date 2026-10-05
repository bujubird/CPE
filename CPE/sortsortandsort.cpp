#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
int n, m;
bool compare(int a, int b){
    if(a%m!=b%m){
        return a%m<b%m;
    }
    if(a%2){
        if(b%2){
            return a>b;
        }else{
            return true;
        }
    }else{
        if(b%2){
            return false;
        }else{
            return a<b;
        }
    }
}
int main(){
    while(cin>>n>>m){
        if(n==0 && m==0){
            return 0;
        }
        int A[10005];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A,A+n,compare);
        for(int i=0;i<n;i++){
            cout<<A[i]<<endl;
        }
    }
}