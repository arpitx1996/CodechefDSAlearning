#include<bits/stdc++.h>
#define int long long 
#define rep(i,x,n) for(int i=x;i<n;i++)
#define reprev(i,n,x) for(int i=n;i>=x;i--)
#define mp(a,b) make_pair(a,b)
#define mod 998244353
#define pb push_back
#define vi vector<int>
#define pi pair<int,int>
#pragma GCC target ("sse4.2")
using namespace std; 

void grayserge()
{
 int g;
 cin>>g;
 for(int x=0;x<g;x++){
   int i,n,q;
   cin>>i>>n>>q;
   if(n%2==0){
    if(i==q){
      cout<<n/2<<"\n";
    }else{
      cout<<n/2<<"\n";
    }
   }else{
    if(i==q){
      cout<<n/2<<"\n";
    }else{
      cout<<n/2+1<<"\n";
    }
   }
 }
}
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    cin>>t;
    while(t--){
      grayserge();
    }
    cerr<<"time taken: "<<(float)clock()/CLOCKS_PER_SEC<<endl;
  return 0;
}