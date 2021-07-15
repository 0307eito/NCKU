#include <iostream>
#include <string>
using namespace std;

int f(int m)
{
	if (m==0)
	{
		return 3;
	}
	if (m>1)
	    return 2*f(m-1)-5;
}

int main()
{	
	int count;
	scanf("%d",&count);
	for (int i=1; i<=count; i++)
	{
		int num,ans;
		scanf("%d",&num);
		
		ans = f(num);
		cout<<ans<<endl;
    }
}
