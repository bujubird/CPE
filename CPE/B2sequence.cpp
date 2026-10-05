#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//PASS
int main(){
    int seqnum;
    int testcase=1;
    while(cin>>seqnum){
        bool flag=true;
        int num[seqnum];
        int table[20000]={0};
        int index;
        for(int i=0;i<seqnum;i++){
            cin>>num[i];
            if(num[i]<1){
                flag=false;
            }
            if(i>=1 && num[i-1]>=num[i]){
                flag=false;
            }
        }
        if(flag==true){
            for(int i=0;i<seqnum;i++){
                for(int j=i;j<seqnum;j++){
                    index=num[i]+num[j];
                    if(table[index]==0){
                        table[index]=1;
                    }else{
                        flag=false;
                        break;
                    }
                }
            }
        }
        if(flag==true){
            cout<<"Case #"<<testcase<<": It is a B2-Sequence."<<endl;
        }else{
            cout<<"Case #"<<testcase<<": It is not a B2-Sequence."<<endl;
        }
        testcase++;
    }
}