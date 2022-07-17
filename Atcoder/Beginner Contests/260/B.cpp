#include <bits/stdc++.h>
using namespace std;
void solve(pair<int,int> A[],int n,int x,vector<bool> &adm,vector<int>& ans){
    int X=0;
    for(int i=0;i<n;i++){
        if(!adm[A[i].second]){
            if(X>=x){
                break;
            }
            adm[A[i].second]=true;
            X++;
            // cout<<A[i].second<<endl;
            ans.push_back(A[i].second);
        }
    }
}
bool comp(pair<int,int> a,pair<int,int> b){
    // a should be before b or not ?
    // return ()
    if(a.first==b.first){
        return a.second < b.second;
    }
    return a.first > b.first;
}
int main() {
    // cout<<"Hello World!";
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    // vector<pair<int,int>> A(n,0),B(n,0),Tot(n,0);
    pair<int,int> A[n],B[n],Tot[n];
    vector<bool> adm(n,false);

    for(int i=0;i<n;i++){
        cin>>A[i].first;
        A[i].second=i+1;
    }
    for(int i=0;i<n;i++){
        cin>>B[i].first;
        B[i].second=i+1;
        // cout<<B[i].first<<" \n"[i==n-1];
        Tot[i].first=A[i].first+B[i].first;
        Tot[i].second=i+1;
    }
    vector<int> v;

    sort(A,A+n,comp);
    sort(B,B+n,comp);
    sort(Tot,Tot+n,comp);
    // for(int i=0;i<n;i++){
    //     cout<<Tot[i].first<<" \n"[i==n-1];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<Tot[i].second<<" \n"[i==n-1];
    // }
    solve(A,n,x,adm,v);
    solve(B,n,y,adm,v);
    solve(Tot,n,z,adm,v);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
        // [i==v.size()-1];
    }


}
