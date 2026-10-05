#include <iostream>
#include <string>
using namespace std;
//WA
int main(){
    string s;
    int count;
    while(getline(cin,s)){
        count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='"'&&count==0){
                cout<<"``";
                count=1;
            }else if(s[i]=='"' && count==1){
                cout<<"''";
                count=0;
            }else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }

}