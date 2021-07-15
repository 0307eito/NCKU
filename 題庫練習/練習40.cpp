#include <iostream>
#include <string>
using namespace std;

int main()
{
	char s1[6],s2[6],s3[6],s4[6],s5[6];
	cin.getline(s1,6);
	cin.getline(s2,6);
	cin.getline(s3,6);
	cin.getline(s4,6);
	cin.getline(s5,6);
	
	char s[5][5] = {{s1[0],s1[1],s1[2],s1[3],s1[4]},{s2[0],s2[1],s2[2],s2[3],s2[4]},{s3[0],s3[1],s3[2],s3[3],s3[4]},{s4[0],s4[1],s4[2],s4[3],s4[4]},{s5[0],s5[1],s5[2],s5[3],s5[4]}};

	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			int count=0;
			
			if ((int)s[i][j] != 42)
			{
				if (i+1<5 && i+1>=0)
				{
					if ((int)s[i+1][j]==42)
					{
						count+=1;
					}
				}
				if (i-1<5 && i-1>=0)
				{
					if ((int)s[i-1][j]==42)
					{
						count+=1;
					}
				}
				if (j+1<5 && j+1>=0)
				{
					if ((int)s[i][j+1]==42)
					{
						count+=1;
					}
				}
				if (j-1<5 && j-1>=0)
				{
					if ((int)s[i][j-1]==42)
					{
						count+=1;
					}
				}
				
				if (i+1<5 && i+1>=0)
				{
					if ((int)s[i+1][j+1]==42)
					{
						count+=1;
					}
				}
				if (i-1<5 && i-1>=0)
				{
					if ((int)s[i-1][j-1]==42)
					{
						count+=1;
					}
				}
				if (j+1<5 && j+1>=0)
				{
					if ((int)s[i-1][j+1]==42)
					{
						count+=1;
					}
				}
				if (j-1<5 && j-1>=0)
				{
					if ((int)s[i+1][j-1]==42)
					{
						count+=1;
					}
				}
				cout<<count;
		    }
		    else
		    {
		    	cout<<"*";
		    }
		}
		cout<<""<<endl;
	}
}
