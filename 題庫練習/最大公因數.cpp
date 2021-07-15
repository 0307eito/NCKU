#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	
	int count;
	cin>>count;
	
	for (int i=0;i<count;i++)
	{
		int A,B,ans=1;
		cin>>A;
		cin>>B;
		
		if (A>B)
		{
			for (int j=1;j<=B;j++)
			{
				if (A%j==0 && B%j==0)
				{
					ans = j;
				} 
			}
		}
		
		if (A<B)
		{
			for (int j=1;j<=A;j++)
			{
				if (A%j==0 && B%j==0)
				{
					ans = j;
				} 
			}
		}
		
		cout<<ans<<endl;
    }
}
