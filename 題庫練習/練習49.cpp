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
	char gender[n];
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
		gender[i]=G;
    }
    
    char name_fst[n];
    for (int i=0;i<n;i++)
    {
    	string temp = name[i];
    	name_fst[i] = temp[0];
    }
    
    int name_fst_ascii[n];
    for (int i=0;i<n;i++)
    {
    	name_fst_ascii[i] = (int)name_fst[i];
    }
    
   

    int name_fst_ascii2[n];
    for (int i=0;i<n;i++)
    {
    	name_fst_ascii2[i] = name_fst_ascii[i];
    }
    
    stu.fun1(name_fst_ascii2,n);
    
    int index[n];
    for (int i=0;i<n;i++)
    {
    	for (int j=0;j<n;j++)
    	{
    		if (name_fst_ascii2[i]==name_fst_ascii[j])
    		{
    			index[i]=j;
    		}
    	}
    }
    for (int i=0;i<n;i++)
    {
    	int temp_index=index[i];
    	cout<<name[temp_index]<<" "<<gender[temp_index]<<" "<<score[temp_index]<<endl;
    }
}
