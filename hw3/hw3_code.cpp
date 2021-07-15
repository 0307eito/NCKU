#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout<<"請輸入兩個字串P與Q:"<<endl;
	char P[20],Q[20];
	cin.getline(P,20);
	cin.getline(Q,20);
	cout<<""<<endl;
    //A. 印出P字串
    cout<<P<<endl;
	//B. 印出P字串中之大寫英文字母
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
    //C. 印出P字串與Q字串之串接字串
    cout<<P;
    cout<<Q<<endl;
    //D. 印出PQ串接字串之反轉字串
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
    //E. 計算並印出P字串與Q字串共有幾個小寫英文字母
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
    //F. 計算並印出P字串與Q字串中，數字的總和
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
    //G. 印出P字串與Q字串之交集子字串 (P和Q都有的字元，順序不限)
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
	//H. 印出P字串與Q字串之聯集子字串 (P或Q有的字元，順序不限)
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
	//I. 將Q字串中的英文字母，大寫改小寫，小寫改大寫，並且印出
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
	//J. 將P字串中的字元，按照ASCII編碼，由小到大排序，並且印出
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
    
