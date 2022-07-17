#include <iostream>
using namespace std;
long long n,x,y;
long long calcB(long long lvl);
long long calcR(long long lvl);

long long calcB(long long lvl){
   if(lvl==1){
       return 1;
   }
 return calcR(lvl-1)+y*calcB(lvl-1);
}
long long calcR(long long lvl){
    if(lvl==1){
        return 0;
    }
    return x*calcB(lvl)+calcR(lvl-1);
}
int main() {
    cin>>n>>x>>y;
    cout<<calcR(n)<<endl;
}
