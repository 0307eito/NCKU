#include <iostream>
#include <string>
using namespace std;
int main()
{
	int m;
	cin>>m;
	
	for (int i=1;i<=m;i++)
	{
		int M;
		cin>>M;
	
		int ans=0;
		while (M!=0)
		{
			int n1;
			n1=M%10;
			ans=ans+n1;
			M=(M-n1)/10;
	    }
	    cout<<ans<<endl;	
	}
} 
