#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class Student {
	
	private:
		string name;
		char gender;
		int score;
		
	public:
		
		void set_data(string N, char G, int S)
		{
			name=N;
			gender=G;
			score=S;
		}
		
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
};

int main()
{
	int n;
	cin>>n;
	
	Student stu;
	int score[n];
	char name[n][20];
	int M_=0;
	int F_=0;
	
	for (int i=0; i<n; i++)
	{
		char N[20];
		char G;
		int S; 
		scanf("%s %c %d",&N,&G,&S);
		string N2=N;
		stu.set_data(N2,G,S);
		
		score[i]=S;
		strcpy(name[i],N);
    }
    
    int name_len[n];
    for (int i=0;i<n;i++)
    {
    	string temp=name[i];
    	name_len[i]=temp.length();
    }
    int name_int[n];
    for (int i=0;i<n;i++)
    {
    	string temp=name[i];
    	name_int[i]=temp.length();
    }
    
    stu.fun1(name_len,n);
    
    int min_len=name_len[0];
    int max_len=name_len[n-1];
    
    
    int min_index;
    for (int i=0;i<n;i++)
    {
    	if (name_int[i]==min_len)
    	{
    		min_index=i;
    		break;
    	}
    }
    int max_index;
    for (int i=0;i<n;i++)
    {
    	if (name_int[i]==max_len)
    	{
    		max_index=i;
    		break;
    	}
    }
    
    cout<<score[max_index]<<endl;
    cout<<score[min_index]<<endl;
}
