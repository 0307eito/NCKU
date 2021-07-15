#include <iostream>
#include <string>
using namespace std;

void sumFactor(int m, int *sum)
{
	for (int i=1;i<(m/2)+1;i++)
	{
		if (m%i==0)
		{
			*sum+=i; 
		} 
	}
	return;
}


int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
	{
		int sum=0,m;
		int *Sum=&sum;
		
		cin>>m;
		sumFactor(m, Sum);
		cout<<sum<<endl;
	} 
} 
