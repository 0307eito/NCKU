#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		int a,b;
		char o;
		scanf("%d %s %d",&a,&o,&b);
		
		if ((int)o==43)
		{
			cout<<a+b<<endl;
		}
		if ((int)o==45)
		{
			cout<<a-b<<endl;
		}
		if ((int)o==42)
		{
			cout<<a*b<<endl
		}
    }
}
