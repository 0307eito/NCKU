#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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
	cin>>n;
	
	int array1[n];
	int array1_2[n];
	char array2[n];
	char array3[n][20];

	for (int i=0; i<n; i++)
	{
		int score;
		char name[20],sex;
		scanf("%s %c %d",&name,&sex,&score);
		
		string name_temp=name;
		
		strcpy(array3[i],name);
        array2[i]=sex;
        array1[i]=score;
        array1_2[i]=score;
    }
    
    fun1(array1,n);
    
    int array1_3[n];
    for (int i=n-1; i>=0; i--)
    {
    	array1_3[(n-1)-i]=array1[i];
    }
    
    
    for (int i=0; i<n; i++)
    {
    	for (int j=0; j<n; j++)
    	{
    		if (array1_3[i]==array1_2[j])
    		{
    			cout<<array3[j]<<" "<<array2[j]<<" "<<array1_2[j]<<endl;
    		}
    		
    	}
    }
}
