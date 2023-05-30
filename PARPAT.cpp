#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    int x=n;
	    int b=1;
	    if(n==1){
	        cout<<1;
	        cout<<"\n\n";
	        t--;
	        continue;
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<2*n-1;j++){
	            if(j<b || j>=2*n-b-1) cout<<"| ";
	            else cout<<abs(x)<<" ";
	        }
	        x--;
	        if(x!=1) b++;
	        cout<<endl;
	    }
	    x=2;
	    b=n-1;
	    for(int i=0;i<n-1;i++){
	        for(int j=0;j<2*n-1;j++){
	            if(j<b || j>=2*n-b-1) cout<<"| ";
	            else cout<<abs(x)<<" ";
	        }
	        b--;
	        x++;
	        cout<<endl;
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
