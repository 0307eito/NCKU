#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int temp_pass_F=0;
	int temp_pass_M=0;
	for (int i=0; i<n; i++)
	{
		int score;
		char name[20],sex;
		scanf("%s %c %d",&name,&sex,&score);

		if (score>=60 && (int)sex==70)
		{
			temp_pass_F+=1;
		}
		if (score>=60 && (int)sex==77)
		{
			temp_pass_M+=1;
		}
    }
    cout<<temp_pass_F<<endl;
    cout<<temp_pass_M<<endl;
}
