#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	cin.get();
	for (int i=0; i<n; i++)
	{
		char s[100],q;
	    cin.getline(s,100);
	    string len=s;
	    
        int count=0;
		for (int j=0; j<len.length(); j++)
		{
			char *x;
			x=&s[j];
			
			if ((int)*x>=65 && (int)*x<=90 || (int)*x>=97 && (int)*x<=122)
			{
				count+=1;
			}
			else
			{
				count+=0;
			}
		}
		cout<<count<<endl;	
	}
}
