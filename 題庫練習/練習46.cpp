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
	int score_m[n];
	int score_f[n];
	char name_m[n][20];
	char name_f[n][20];
	
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
		
		if ((int)G==77)
		{
			score_m[M_]=S;
			strcpy(name_m[M_],N);
			M_+=1;
		}
		if ((int)G==70)
		{
			score_f[F_]=S;
			strcpy(name_f[F_],N);
			F_+=1;
		}
    }
    
    int score_M[M_];
    for (int i=0;i<M_;i++)
    {
    	score_M[i]=score_m[i];
    }
    int score_F[F_];
    for (int i=0;i<F_;i++)
    {
    	score_F[i]=score_f[i];
    }
    
    
    stu.fun1(score_M,M_);
    stu.fun1(score_F,F_);
    int M_min=score_M[0];
    int F_min=score_F[0];
    
    
    int score_M_ori[M_];
    for (int i=0;i<M_;i++)
    {
    	score_M_ori[i]=score_m[i];
    }
    int score_F_ori[F_];
    for (int i=0;i<F_;i++)
    {
    	score_F_ori[i]=score_f[i];
    }
    
    
    int index_M_min=0;
    for (int i=0;i<M_;i++)
    {
    	if (score_M_ori[i]==M_min)
    	{
    		index_M_min=i;
    		break;
    	}
    }
    int index_F_min=0;
    for (int i=0;i<F_;i++)
    {
    	if (score_F_ori[i]==F_min)
    	{
    		index_F_min=i;
    		break;
    	}
    }
    
    
    cout<<name_f[index_F_min]<<endl;
    cout<<name_m[index_M_min]<<endl;
}
