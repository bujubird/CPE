    #include <iostream>
    #include <string>
    using namespace std;
    //not pass
    int main(){
        int testcase;
        cin>>testcase;
        int totalcases=testcase;
        int flag[totalcases];
        long long int casenum=0;
        while(testcase--){
            long long int N;
            cout<<"N = ";
            flag[casenum]=1;
            cin>>N;
            long long int matrix[N*N];
            for(int i=0;i<N*N;i++){
                cin>>matrix[i];
            }
            for(int i=0;i<N*N;i++){
                if(matrix[i]<0 || matrix[i]!=matrix[N*N-1-i]){
                    flag[casenum]=0;
                    break;
                }
            }
            casenum++;
        }
        for(int i=0;i<totalcases;i++){
            if(flag[i]==1){
                cout<<"Test #"<<i+1<<": Symmetric"<<endl;
            }else{
                cout<<"Test #"<<i+1<<": Non-symmetric"<<endl;
            }
        }
    }