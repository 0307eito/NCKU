#include <iostream>
#include <string>
using namespace std;

void circle(int r, double *area, double *peri)
{
	double PI=3.1416;
	*area=r*r*PI;
	*peri=r*2*PI;
}

int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
	{
		int r;
		double area=0,peri=0;
		cin>>r;
		circle(r, &area, &peri);
		
		double tempt1=area+0.005;
		double tempt2=peri+0.005;
		cout<<double(int(tempt1*100))/100<<endl;
		cout<<double(int(tempt2*100))/100<<endl;
	} 
} 
