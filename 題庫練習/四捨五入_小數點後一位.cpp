#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	
	int count;
	cin>>count;
	
	for (int i=0;i<count;i++)
	{
		float num,ans;
		cin>>num;
		
		num+=0.05;
		
		cout<<double(int(num*10))/10<<endl;
    }
}
