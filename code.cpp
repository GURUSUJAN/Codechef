#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    if(1<=x && x<=4)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	cout<<n<<endl;
}
