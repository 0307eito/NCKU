#include <iostream>
#include <string>
using namespace std;
int fun1(int arr[],int m)
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
}


int main()
{
	int n;
	scanf("%d",&n);
	cin.get();
	for (int i=0; i<n; i++)
	{
		char s[20],q;
	    cin.getline(s,20);
	    string len=s;
        
        int tem[len.length()];
		for (int j=len.length()-1; j>=0; j--)
		{
			tem[j]=(int)s[j];
		}
		fun1(tem,len.length());
		string str="";
		for (int i=0; i<len.length() ;i++)
		{
			str+=tem[i];
		}
		cout<<str<<endl;	
	}
}
