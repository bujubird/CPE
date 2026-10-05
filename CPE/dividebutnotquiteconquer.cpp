#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
        vector<int> a;
        int i=0;
        bool flag=1;
        if (n < 2 || m < 2){
            flag=0;
        }else{
            while(n>=1){
                if(n%m!=0 && n%m<n){
                    flag=0;
                    break;
                }
                a.push_back(n);
                n/=m;
            }
            if(flag==true){
                for(int j=0;j<a.size();j++){
                    cout<<a[j]<<" ";
                }
                cout<<endl;
            }else{
                cout<<"Boring!"<<endl;
            }
        }
        
    }
}