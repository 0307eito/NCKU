#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	cout<<"�@�@ ��ġġġġ�"<<endl;
	cout<<"�@�@ |   /�@�@�@\\ �@"<<endl;
	cout<<"�@�@/�@�@���@�@�@�� |"<<endl;
	cout<<"�@ |�@�@�@( _��_)�@ |  �XA�XB�q�Ʀr !!"<<endl;
	cout<<" �� �@ �@�@ |��|�@�@�@"<<endl;
	cout<<"/�@�ġġ@           > )"<<endl;
	cout<<"(�ġġġ^�@�@�@�@ (_��"<<endl;
	cout<<"�@|�@�@�@�@�@�@ ��"<<endl;
	cout<<"�@|�@�@���@�@  �@"<<endl;
	cout<<"�@|�@/�@�@�@ )�@ )"<<endl;
	cout<<"�@��@�@�@ �]�@ \\"<<endl;
	cout<<"�@�@�@�@�@�@ �@��)"<<endl;
	system("pause");
	cout<<""<<endl;
	cout<<"####################################################"<<endl;
	cout<<"                       �q�Ʀr                       "<<endl;
    cout<<"####################################################"<<endl;
    cout<<""<<endl;
    
    int ANS=8462;
    int count=0;
    cout<<"�п�J�ƦrN:";
    while (true)
	{
		int N;
    	cin>>N;
    	count=count+1;
    	int A_count=0;
		int B_count=0;
		for (int i=1; i<=4; i++){
			int num;
			int ans=ANS;
			num=N%10;
			N=(N-num)/10;
			for (int j=1; j<=4; j++){
				int num2;
				num2=ans%10;
				ans=(ans-num2)/10;
				if (num==num2 && i==j){
					A_count=A_count+1;
				}
				if (num==num2 && i!=j){
					B_count=B_count+1;
				}	
			}
		}
		if (A_count==4){
			cout<<A_count<<"A"<<B_count<<"B"<<"�A���ץ��T"<<endl;
			cout<<""<<endl;
			cout<<"####################################################"<<endl;
			cout<<"                        ����                        "<<endl;
		    cout<<"####################################################"<<endl;
    		cout<<""<<endl;
    		cout<<"�@�@ ��ġġġġ�"<<endl;
			cout<<"�@�@ |   /�@�@�@\\ �@"<<endl;
			cout<<"�@�@/�@�@�֡@�@�@�� |"<<endl;
			cout<<"�@ |�@�@�@( _��_)�@ |  ���ߵ���! "<<"�@�@�q�F"<<count<<"��!"<<endl;
			cout<<" �� �@ �@�@ |��|�@�@�@"<<endl;
			cout<<"/�@�ġġ@           > )"<<endl;
			cout<<"(�ġġġ^�@�@�@�@ (_��"<<endl;
			cout<<"�@|�@�@�@�@�@�@ ��"<<endl;
			cout<<"�@|�@�@���@�@  �@"<<endl;
			cout<<"�@|�@/�@�@�@ )�@ )"<<endl;
			cout<<"�@��@�@�@ �]�@ \\"<<endl;
			cout<<"�@�@�@�@�@�@ �@��)"<<endl;
			break;
		}
		cout<<A_count<<"A"<<B_count<<"B"<<"�A�п�J�ƦrN:";
	}
}
