#include <iostream>
using namespace std;
//TLE
int main(){
    int x;
    while(cin>>x){
        long long int a[20000],f;
        int n;
        for(n=0;;n++){
            cin>>a[n];
            if(getchar()=='\n'){
                break;
            }
        }
        f=a[0]*n;
        for(int i=1;i<n;i++){
            f=f*x+a[i]*(n-i);
        }
        cout<<f<<endl;
    }
}