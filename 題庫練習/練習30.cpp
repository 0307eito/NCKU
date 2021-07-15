#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int count;
	scanf("%d",&count);
	cin.get();
	for (int i=1; i<=count; i++)
	{
		char s[100];
	    cin.getline(s,100);
	    string str=s;
	    string ans;
	    for (int j=0; j<str.length(); j++)
	    {
	    	if (int(s[j])>=65 && int(s[j])<=90)
	    	{
	    		ans+=char(int(s[j])+32);
	    	}
	    	else
	    	{
	    		ans+=s[j];
	    	}
	    }
	    cout<<ans<<endl;
    }
}
