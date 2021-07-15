#include <iostream>
#include <string>
using namespace std;

void rf(int *a, int *b)
{
	int A=*a;
	int B=*b;
	for (int i=*a; i>1; i--)
	{
		if (*a%i==0 && *b%i==0)
		{
			A=*a/i;
			B=*b/i;
			break;
		}
	}
	cout<<A<<"/"<<B<<endl;
}

int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
	{
		int input1,input2;
		cin>>input1;
		cin>>input2;
		rf(&input1, &input2);
	} 
} 
