#include <iostream>
#include <string>
using namespace std;

int mid3(int arr[],int m)
{
	int temp;
	
	for (int i=1; i<m; i++)
	{
		for (int j=0; j<m-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr[m/2];
}
int main()
{	
	int count;
	scanf("%d",&count);
	for (int i=1; i<=count; i++)
	{
		int Arr[5],ans,count2;
		cin>>count2;
		for (int j=0; j<count2; j++)
		{
			int num;
			cin>>num;
			Arr[j]=num;
		}
		ans = mid3(Arr,count2);
		cout<<ans<<endl;
    }
}
