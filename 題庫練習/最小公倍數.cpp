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
			for (int j=A;j<=A*B;j++)
			{
				if (j%A==0 && j%B==0)
				{
					ans = j;
					break;
				} 
			}
		}
		
		if (A<B)
		{
			for (int j=B;j<=A*B;j++)
			{
				if (j%A==0 && j%B==0)
				{
					ans = j;
					break;
				} 
			}
		}
		
		cout<<ans<<endl;
    }
}
