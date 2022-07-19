#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int C[n];
        for(int i=0;i<n;i++){
            cin>>C[i];
            // C[i]--;
        }
        // int prev[n];// C[i]-1
        // 0 4
        vector<int> prev(n+1,-1);
        vector<int> ans(n+1,0);
        for(int i=0;i<n;i++){
            if(prev[C[i]]==-1){
                ans[C[i]]+=1;
                prev[C[i]]=i;
            }
            else if(prev[C[i]]==i-1){
                ans[C[i]]+=1;
                prev[C[i]]=i;
            }
            else if((i-prev[C[i]])%2==1){
                ans[C[i]]+=1;
                prev[C[i]]=i;
            }
            else{
                prev[C[i]]=i;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

        // int ans[n];
        /*
        vector<int> ans(n,0);
        int prev = C[0];
        int x=0,y=0;
        ans[C[0]]++;
        // int beside[n];
        vector<vector<int>> grid;
        int left_is_free = 1;
        for(int i=1;i<n;i++){
            if(C[i]==prev){
                // x=x;
                y++;
                ans[C[i]]++;
                left_is_free=1;
            }
            else if(left_is_free){
                // left
                if()
                ans[C[i]]++;
                left_is_free=0;
            }   
            else {

            }
            prev=C[i]
        }
        */
        // 1 2 4 7/9
        // 5 
        // r r 0 r r
        // right or left then you have to also leave the next guy.

    }
}
