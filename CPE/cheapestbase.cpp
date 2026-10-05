#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//so hardddddd

int main(){
    int testcase,start=1;
    cin>>testcase;
    while(start<=testcase){
        cout<<"Case "<<start<<":"<<endl;
        int cost[36];
        for(int i=0;i<36;i++){
            cin>>cost[i];
        }
        int N;
        cin>>N;
        while(N--){
            int num;
            cin>>num;
            int r,min=0;
            int table[40];
            for(int i=2;i<=36;i++){
                int temp=num, sum=0;
                while(temp!=0){
                    r=temp%i;
                    sum+=cost[r];
                    temp/=i;
                }
                table[i]=sum;
                if(min==0 || min>=sum){
                    min=sum;
                }
            }
            cout<<"Cheapest base(s) for number "<<num<<": ";
            for(int i=2;i<=36;i++){
                if(table[i]==min){
                    cout<<" "<<i;
                }
            }
            cout<<endl;
            if(start<testcase){
                cout<<endl;
            }
            
        }
        start++;
    }
}