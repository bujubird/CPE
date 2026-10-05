#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std; 
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            bool isswap=false;
            for(int j=0;j<n-1;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    isswap=true;
                    count++;
                }
            }
            if(isswap==false){
                break;
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
}