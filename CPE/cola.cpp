#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int empty=n,cola=n;
        while(empty>=3){
            cola+=(empty/3);
            empty=(empty/3) + (empty%3);
        }
        cout<<cola<<endl;
    }
}