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
};

int main()
{
	int n;
	cin>>n;
	
	Student stu;
	int score_m[n];
	int score_f[n];
	
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
			M_+=1;
		}
		if ((int)G==70)
		{
			score_f[F_]=S;
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
    
    int F_count=0;
    for (int i=0;i<F_;i++)
    {
    	if (score_F[i]<60)
    	{
    		F_count+=1;
    	}
    }
    int M_count=0;
    for (int i=0;i<M_;i++)
    {
    	if (score_M[i]<60)
    	{
    		M_count+=1;
    	}
    }

    cout<<F_count<<endl;
    cout<<M_count<<endl;
}
