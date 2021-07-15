#include <iostream>
#include <string>
using namespace std;

int MAX(int a,int b,int c)
{
	int max=0;
	int num[3] = {a,b,c};
	for (int i=0; i<3; i++)
	{
		max = (num[i]>max) ? num[i]:max;	
	}
	return max;
}

int main()
{	
	int count;
	scanf("%d",&count);
	for (int i=1; i<=count; i++)
	{
		int a,b,c,ans;
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		ans = MAX(a,b,c);
		cout<<ans<<endl;
	}
} 
