#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout<<"�п�J��Ӧr��P�PQ:"<<endl;
	char P[20],Q[20];
	cin.getline(P,20);
	cin.getline(Q,20);
	cout<<""<<endl;
    //A. �L�XP�r��
    cout<<P<<endl;
	//B. �L�XP�r�ꤤ���j�g�^��r��
	for (int i=0; i<20; i++)
	{
		if (P[i]==NULL)
		{
			break;
		}
		if (int(P[i])>=65 &&  int(P[i])<91)
		{
			cout<<P[i];
		}
	}
	cout<<""<<endl;
    //C. �L�XP�r��PQ�r�ꤧ�걵�r��
    cout<<P;
    cout<<Q<<endl;
    //D. �L�XPQ�걵�r�ꤧ����r��
	string p=P;
	string q=Q;
	string p_ans="";
	string q_ans="";
    for (int i=p.length()-1; i>=0; i--)
    {
		p_ans+=p[i];
    }
    for (int i=q.length()-1; i>=0; i--)
    {
		q_ans+=q[i];
    }
    cout<<q_ans<<p_ans<<endl;
    //E. �p��æL�XP�r��PQ�r��@���X�Ӥp�g�^��r��
    int count=0;
    for (int i=0; i<p.length(); i++)
    {
    	if (int(p[i])>=97 && int(p[i])<=122)
    	{
    		count+=1;
    	}
    }
    for (int i=0; i<q.length(); i++)
    {
    	if (int(q[i])>=97 && int(q[i])<=122)
    	{
    		count+=1;
    	}
    }
    cout<<count<<endl;
    //F. �p��æL�XP�r��PQ�r�ꤤ�A�Ʀr���`�M
    int total=0;
    for (int i=0; i<p.length(); i++)
    {
    	if (int(p[i])>=49 && int(p[i])<=57)
    	{
    		total+=int(p[i])-48;
    	}
    }
    for (int i=0; i<q.length(); i++)
    {
    	if (int(q[i])>=49 && int(q[i])<=57)
    	{
    		total+=int(q[i])-48;
    	}
    }
    cout<<total<<endl;
    //G. �L�XP�r��PQ�r�ꤧ�涰�l�r�� (P�MQ�������r���A���Ǥ���)
    for (int i=0; i<p.length(); i++)
    {
    	for (int j=0; j<q.length(); j++)
    	{
    		if (p[i]==q[j])
    		{
    			cout<<q[j];
    		}
    	}
    }
    cout<<""<<endl;
	//H. �L�XP�r��PQ�r�ꤧ�p���l�r�� (P��Q�����r���A���Ǥ���)
	string ans;
	int N=0;
	for (int i=0; i<p.length(); i++)
    {
    	for (int j=0; j<ans.length(); j++)
    	{
    		if (ans[j]==p[i])
    		{
    			N=1;
    		}
    	}
    	if (N==0)
    		{
    			ans+=p[i];
    		}
    	N=0;
    }
    for (int i=0; i<q.length(); i++)
    {
    	for (int j=0; j<ans.length(); j++)
    	{
    		if (ans[j]==q[i])
    		{
    			N=1;
    		}
    	}
    	if (N==0)
    		{
    			ans+=q[i];
    		}
    	N=0;
    }
    cout<<ans<<endl;
	//I. �NQ�r�ꤤ���^��r���A�j�g��p�g�A�p�g��j�g�A�åB�L�X
	string ans2;
	for (int i=0; i<q.length(); i++)
    {
    	if (q[i]>=65 && q[i]<=90)
    	{
    		ans2+=(char)(q[i]+32);
    	}
    	else if (q[i]>=97 && q[i]<=122)
    	{
    		ans2+=(char)(q[i]-32);
    	}
    	else
    	{
    		ans2+=q[i];
    	}
    }
	cout<<ans2<<endl;
	//J. �NP�r�ꤤ���r���A����ASCII�s�X�A�Ѥp��j�ƧǡA�åB�L�X
	int p_ASCII[p.length()];
	for (int i=0; i<p.length(); i++)
	{
		p_ASCII[i]=(int)p[i];
	}
	int temp;
	for (int i=1; i<p.length(); i++)
	{
		for (int j=0; j<p.length()-i; j++)
		{
			if (p_ASCII[j]>p_ASCII[j+1])
			{
				temp=p_ASCII[j];
				p_ASCII[j]=p_ASCII[j+1];
				p_ASCII[j+1]=temp;
			}
		}
	}
	for (int i=0; i<p.length(); i++)
	{
		for (int j=0; j<p.length(); j++)
		{
			if (char(p_ASCII[i])==p[j])
			{
				cout<<char(p_ASCII[i]);
			}
		}
	}
	cout<<""<<endl;
}
    
