#include <iostream>
using namespace std;
//除等於10 趴等於10
//pass
int main() {
    int a,b;
    int count;
    int carry;
    while(cin>>a>>b){
        if(a==0 && b==0){
            return 0;
        }
        count=0,carry=0;
        while(a!=0 || b!=0){
            if(((a%10)+(b%10)+carry) >= 10){
                count++;
                carry=1;
            }else{
                carry=0;
            }
            a/=10;
            b/=10;
        }
        if(count==0){
            cout<<"No carry operation."<<endl;
        }else if(count==1){
            cout<<"1 carry operation."<<endl;
        }else{
            cout<<count<<" carry operations."<<endl;
        }
    }
}