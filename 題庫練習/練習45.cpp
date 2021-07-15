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
	
	int array1_F[n];
	int array1_2_F[n];
	char array2_F[n];
	char array3_F[n][20];
	
	int array1_M[n];
	int array1_2_M[n];
	char array2_M[n];
	char array3_M[n][20];
	
	int M_count=0;
	int F_count=0;

	for (int i=0; i<n; i++)
	{
		int score;
		char name[20],sex;
		scanf("%s %c %d",&name,&sex,&score);
		
		if ((int)sex==70)
		{
			strcpy(array3_F[F_count],name);
	        array2_F[F_count]=sex;
	        array1_F[F_count]=score;
	        array1_2_F[F_count]=score;
	        F_count+=1;
	    }
	    if ((int)sex==77)
		{
			strcpy(array3_M[M_count],name);
	        array2_M[M_count]=sex;
	        array1_M[M_count]=score;
	        array1_2_M[M_count]=score;
	        M_count+=1;
	    }
    }
    
    int array1_F2[F_count];
    int array1_M2[M_count];
    for (int i=0; i<F_count; i++)
    {
    	array1_F2[i]=array1_F[i];
    }
    for (int i=0; i<M_count; i++)
    {
    	array1_M2[i]=array1_M[i];
    }
    
    
    fun1(array1_F2,F_count);
    fun1(array1_M2,M_count);

    int array1_3_F[F_count];
    int array1_3_M[M_count];
    
    for (int i=F_count-1; i>=0; i--)
    {
    	array1_3_F[F_count-1-i]=array1_F2[i];
    }
    for (int i=M_count-1; i>=0; i--)
    {
    	array1_3_M[M_count-1-i]=array1_M2[i];
    }
    
    
    
    for (int i=0; i<F_count; i++)
    {
    	for (int j=0; j<F_count; j++)
    	{
    		if (array1_3_F[i]==array1_2_F[j])
    		{
    			cout<<array3_F[j]<<" "<<array2_F[j]<<" "<<array1_2_F[j]<<endl;
    		}
    	}
    }
    for (int i=0; i<M_count; i++)
    {
    	for (int j=0; j<M_count; j++)
    	{
    		if (array1_3_M[i]==array1_2_M[j])
    		{
    			cout<<array3_M[j]<<" "<<array2_M[j]<<" "<<array1_2_M[j]<<endl;
    		}
    	}
    }
}
