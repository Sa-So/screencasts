#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        string s;
        for(int i=0;i<m;i++){
            s+='B';
        }
        for(int i=0;i<n;i++){
            if((A[i]-1 < m+1-A[i]-1)){
                // cout<<1<<" ";
                if(s[A[i]-1]=='A')
                s[m+1-A[i]-1]='A';
                else
                s[A[i]-1]='A';
            }
            else{
                // cout<<0<<" ";
                // s[m+1-A[i]-1]='A';
                if(s[m+1-A[i]-1]=='A')
                    s[A[i]-1]='A';
                else
                    s[m+1-A[i]-1]='A';
            }
        }
        // cout<<endl;
        cout<<s<<endl;
        // cin>>s;
    }
}
