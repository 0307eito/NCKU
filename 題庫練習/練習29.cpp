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
	    cout<<str.length()<<endl;
    }
}
