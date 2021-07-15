#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int temp_name_l=0;
	string temp_name_l_sex="";
	int temp_name_s=0;
	string temp_name_s_sex="";
	for (int i=0; i<n; i++)
	{
		int score;
		char name[20],sex;
		scanf("%s %c %d",&name,&sex,&score);
		
		string temp = name;
		
		if (i==0)
		{
			temp_name_l=temp.length();
			temp_name_l_sex=sex;
			
			temp_name_s=temp.length();
			temp_name_s_sex=sex;
		}


		if (temp.length()>temp_name_l)
		{
			temp_name_l=temp.length();
			temp_name_l_sex=sex;
		}
		if (temp.length()<temp_name_s)
		{
			temp_name_s=temp.length();
			temp_name_s_sex=sex;
		}
    }
    cout<<temp_name_l_sex<<endl;
    cout<<temp_name_s_sex<<endl;
}
