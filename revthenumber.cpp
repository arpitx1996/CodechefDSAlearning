#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int x=s.length()-1;
	    for(int i=s.length()-1;i>=0;i--){
	        if(s[i]!='0'){
	            break;
	        }else{
	            x--;
	        }
	    }
	    for(int i=x;i>=0;i--){
	        
	        cout<<s[i];
	    }
	    cout<<"\n";
	}
	return 0;
}