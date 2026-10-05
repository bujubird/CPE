#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//pass
int f(int num){
    int result=0;
    while(num!=0){
        result+=num%10;
        num/=10;
    }
    return result;
}
int main(){
    int num;
    while(cin>>num){
        if(num==0){
            return 0;
        }
        while(num>=10){
            num=f(num);
        }
        cout<<num<<endl;
    }
}