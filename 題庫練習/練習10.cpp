#include <iostream>
#include <string>
using namespace std;
int main()
{
	int N;
	int ans=1;
	cout<<"輸入一正整數N : ";
	scanf("%d",&N);
	for (int i=0; i<N; i++)
	{
		ans=ans*2;
	}
	cout<<ans<<endl;
}
