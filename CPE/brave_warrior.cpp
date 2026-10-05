#include <iostream>
using namespace std;
//這題限制2^32 所以要用long long int
//PASS
int main(){ 
    long long int a, b;
    while(cin>>a>>b){
        long long int r=abs(a-b);
        cout<<r<<endl;
    }
}