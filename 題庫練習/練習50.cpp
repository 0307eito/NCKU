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
		
		int fun(int arr[],int m)
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
	int score2[n];
	char gender[n];
	string name[100];
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
		score2[i]=S;
		name[i]=N2;
		gender[i]=G;
    }
    stu.fun(score2,n);
    
    int index_score[n];
    for (int i=0;i<n;i++)
    {
    	for (int j=0;j<n;j++)
    	{
    		if (score2[i]==score[j])
    		{
    			index_score[i]=j;
    		}
    	}
    }
    
    string name2[n];
    string gender2[n];
    for (int i=0;i<n;i++)
    {
    	int temp_index=index_score[i];
    	name2[i]=name[temp_index];
    	gender2[i]=gender[temp_index];
    }
    
    
    int name2_length[n];
    int name_length[n];
    for (int i=0;i<n;i++)
    {
    	name2_length[i]=name2[i].length();
    }
    for (int i=0;i<n;i++)
    {
    	name_length[i]=name2[i].length();
    }

    stu.fun(name2_length,n); 
       
    int index_[n];
    for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (name2_length[i]==name_length[j])
			{
				name_length[j]=0;
				index_[i]=j;
				break;
			}
		}
	} 
	
    for (int i=0;i<n;i++)
    {
    	int temp_index=index_[i];
    	cout<<name2[temp_index]<<" "<<gender2[temp_index]<<" "<<score2[temp_index]<<endl;
    }
}
