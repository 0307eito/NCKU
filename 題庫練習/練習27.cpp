#include <iostream>
#include <string>
using namespace std;

int mid2(int arr[])
{
	int temp;
	int arr_length=5;
	
	for (int i=1; i<arr_length; i++)
	{
		for (int j=0; j<arr_length-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr[2];
}
int main()
{	
	int count;
	scanf("%d",&count);
	for (int i=1; i<=count; i++)
	{
		int Arr[5],ans;
		for (int j=0; j<5; j++)
		{
			int num;
			cin>>num;
			Arr[j]=num;
		}
		ans = mid2(Arr);
		cout<<ans<<endl;
    }
}
