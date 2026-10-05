#include <iostream>
#include <string>
using namespace std;
//pass
int main(){
    int testcase;
    cin>>testcase;
    int s,d;
    while(testcase--){
        cin>>s>>d;
        bool possible=0;
        int b=0;
        int final_a,final_b;
        for(int a=s;a>=0;a--){
            if(a-b==d){
                final_a=a;
                final_b=b;
                possible=1;
                break;
            }
            b++;
        }
        if(possible==1){
            cout<<final_a<<" "<<final_b<<endl;
        }else{
            cout<<"impossible"<<endl;
        }
        
    }
}