#include <iostream>
#include <string>
using namespace std;

bool poker(int *card)
{
	int p=0,q=0;
	for (int i=0; i<5; i++)
	{
		int P=0;
		for (int j=0; j<5; j++)
		{
			if (*(card+i)==*(card+j))
			{
				P=P+1;
			}
		}
		if (P==3)
		{
			p=P;
			break;
		}
	}
	for (int i=0; i<5; i++)
	{
		int Q=0;
		for (int j=0; j<5; j++)
		{
			if (*(card+i)==*(card+j))
			{
				Q=Q+1;
			}
		}
		if (Q==2)
		{
			q=Q;
			break;
		}
	}
	if (p==3 && q==2)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
	{
		int input1,input2,input3,input4,input5;
		cin>>input1;
		cin>>input2;
		cin>>input3;
		cin>>input4;
		cin>>input5;
		int Card[5]={input1,input2,input3,input4,input5};
		if (poker(Card)==true)
		{
			cout<<"Yes"<<endl;
		}
		if (poker(Card)==false)
		{
			cout<<"No"<<endl;
		}
		
	} 
}
