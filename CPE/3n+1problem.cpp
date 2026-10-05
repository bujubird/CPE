#include <iostream>
using namespace std;
//pass
int main(){
    int a,b,atemp,btemp;
    int count,maxcount;
    int ra,rb;
    while(cin>>a>>b){
        ra=a;
        rb=b;
        if(a>b){
            swap(a,b);
        }
        maxcount=-1;
        for(int i=a;i<=b;i++){
            count=1;
            atemp=i;
            while(atemp!=1){
                if(atemp%2==0){
                    atemp/=2;
                    count++;
                }else{
                    atemp=3*atemp+1;
                    count++;
                }
            }
            if(maxcount<count){
                maxcount=count;
            }
        }
        cout<<ra<<" "<<rb<<" "<<maxcount<<endl;
    }
}