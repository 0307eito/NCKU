#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int temp_score_F=0;
	string temp_name_F;
	int temp_score_M=0;
	string temp_name_M;
	for (int i=0; i<n; i++)
	{
		int score;
		char name[20],sex;
		scanf("%s %c %d",&name,&sex,&score);

		if (score>temp_score_F && (int)sex==70)
		{
			temp_score_F=score;
			temp_name_F=name;
		}
		if (score>temp_score_M && (int)sex==77)
		{
			temp_score_M=score;
			temp_name_M=name;
		}
    }
    cout<<temp_name_F<<endl;
    cout<<temp_name_M<<endl;
}
