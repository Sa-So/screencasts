#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h[n];
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        // 2 4 6 8 ... cool
        long long ans1 = 0,ans2=0,ans3=0;
        for(int i=1;i<n-1;i++){
            if(i%2==1){
                // ans1+= 
                int temp = max(h[i-1],h[i+1])+1-h[i];
                if(temp>0){
                    ans1+=temp;
                }
                if(i==1 && temp>0){
                    ans3+=temp;
                }
                // 0 2
            }
            else{
                int temp = max(h[i-1],h[i+1])+1-h[i];
                if(temp>0){
                    ans2+=temp;
                }
                if(i!=2 && temp>0){
                    ans3+=temp;
                }

            }
        }
        // 1 2 3 4 5 6 7 8 
        //.  2.  4.  6 
        //.    3.  5. 7

        // 0 1 2 3 4 5 6 7 8 9
        //.  1.  3   5.  7   
        //.    2.  4.  6.  8
        if(n%2==0){
            // we can look at both.
            // leave 0
            // 1 , 3
            // 2 , 4
            for(int i=0;i<n;i++){
                
            }
            cout<<min(ans1,min(ans2,ans3))<<endl;
        }
        else{
            // easy.
            cout<<ans1<<endl;
        }

    }
}
