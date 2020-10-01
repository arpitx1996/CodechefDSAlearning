#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    int z=5;
	    while(true){
	        if(z>n){
	            break;
	        }else{
	            count=count+(n/z);
	            z=z*5;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}