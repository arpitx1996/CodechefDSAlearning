#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int x1[26]={0};
	    int x2[26]={0};
	    int z;
	    if(s.length()%2==0){
	       z=s.length()/2; 
	    }else{
	        z=(s.length()+1)/2;
	    }
	    for(int i=0;i<s.length()/2;i++){
	        x1[s[i]-97]++;
	    }
	    for(int i=z;i<s.length();i++){
	        x2[s[i]-97]++;
	    }  
	   // for(int i=0;i<26;i++){
	   //     cout<<x1[i]<<" "<<x2[i];
	   //     cout<<"\n";
	   // }
	    int ok=0;
	    for(int i=0;i<26;i++){
	        if(x1[i]!=x2[i]){
	            cout<<"NO"<<"\n";
	            ok=1;
	            break;
	        }
	    }
	    if(ok==0){
	        cout<<"YES"<<"\n";
	    }
	}
	return 0;
}
