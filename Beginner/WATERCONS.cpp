#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t){
        int x,y;
        y=2000;
        cin>> x;
        if(x<y) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        t--;
    }

	return 0;
}
