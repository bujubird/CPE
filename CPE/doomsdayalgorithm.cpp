#include <iostream>
using namespace std;
//pass
int main(){
    int testcase;
    cin>>testcase;
    int m,d;
    int totalcount;
    while(testcase--){
        totalcount=0;
        string result;
        int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        string week[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        cin>>m>>d;
        for(int i=0;i<m;i++){
            totalcount+=day[i];
        }
        totalcount+=(d+5);
        int weekday=totalcount%7;
        for(int i=0;i<7;i++){
            if(weekday==i){
                result=week[i];
                break;
            }
        }
        cout<<result<<endl;
    }
}