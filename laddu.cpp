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
  int activities;
  string origin;
  cin>>activities;
  cin>>origin;
  int total=0;
  for(int i=0;i<activities;i++){
    string s;
    cin>>s;
   if(s=="CONTEST_WON"){
    int r;
    cin>>r;
    if(r<=20)
    total+=(300)+(20-r);
   else{
    total+=300;
   }
   }else if(s=="TOP_CONTRIBUTOR"){
    total+=(300);
   }else if(s=="BUG_FOUND"){
    int x;
    cin>>x;
    total+=(x);
   }else{
    total+=50;
   }
  }
  if(origin=="INDIAN"){
    cout<<total/200<<"\n";
  }else{
    cout<<total/400<<"\n";
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