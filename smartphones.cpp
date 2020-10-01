#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int max1=0;
	sort(a,a+n);
	for(int i=0;i<n;i++){
	    max1=max(a[i]*(n-i),max1);
	}
	cout<<max1<<"\n";
	return 0;
}