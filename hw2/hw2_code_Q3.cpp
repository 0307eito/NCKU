#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	cout<<"�@�@ ��ġġġġ�"<<endl;
	cout<<"�@�@ |   /�@�@�@\\ �@"<<endl;
	cout<<"�@�@/�@�@���@�@�@�� |"<<endl;
	cout<<"�@ |�@�@�@( _��_)�@ |  �E�c��q�Ʀr !!"<<endl;
	cout<<" �� �@ �@�@ |��|�@�@�@"<<endl;
	cout<<"/�@�ġġ@           > )"<<endl;
	cout<<"(�ġġġ^�@�@�@�@ (_��"<<endl;
	cout<<"�@|�@�@�@�@�@�@ ��"<<endl;
	cout<<"�@|�@�@���@�@  �@"<<endl;
	cout<<"�@|�@/�@�@�@ )�@ )"<<endl;
	cout<<"�@��@�@�@ �]�@ \\"<<endl;
	cout<<"�@�@�@�@�@�@ �@��)"<<endl;
	cout<<""<<endl;
	cout<<"�W�h: �E�c����|���H���ƦC���Ʀr1��9�A�n�q�X�C�ӼƦr�ҹ��������T��m�A�@���u��q�@�ӼƦr�C"<<endl;
	cout<<"      �q���Ʀr�P���T���צb�P�@��Ϊ̦P�@�C�ɷ|�i�����a�C"<<endl;
	cout<<""<<endl;
	system("pause");
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"#################################"<<endl;
	cout<<"             �q�Ʀr              "<<endl;
    cout<<"#################################"<<endl;
	cout<<""<<endl;
	
	int ANS2[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	cout<<"�п�J�ƦrN�B��B�C (�H�Ů�j�})"<<endl;
	cout<<"          *         *           "<<endl;
	cout<<"    "<<ANS2[0][0]<<"     *    "<<ANS2[0][1]<<"    *     "<<ANS2[0][2]<<"     "<<endl;
	cout<<"          *         *           "<<endl;
	cout<<"*******************************"<<endl;
	cout<<"          *         *           "<<endl;
	cout<<"    "<<ANS2[1][0]<<"     *    "<<ANS2[1][1]<<"    *     "<<ANS2[1][2]<<"     "<<endl;
	cout<<"          *         *           "<<endl;
	cout<<"*******************************"<<endl;
	cout<<"          *         *           "<<endl;
	cout<<"    "<<ANS2[2][0]<<"     *    "<<ANS2[2][1]<<"    *     "<<ANS2[2][2]<<"     "<<endl;
	cout<<"          *         *           "<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	int ANS[3][3]={{6,4,1},{3,9,2},{5,7,8}};
	int count=0;

	while (true)
	{
		int N,row,col;
    	scanf("%d %d %d",&N,&row,&col);
    	count=count+1;
    	row=row-1;
    	col=col-1;
    
    	if (N==ANS[row][col])
    	{
    		cout<<"�q��F�A�п�J�ƦrN�B��B�C (�H�Ů�j�})"<<endl;
    		ANS2[row][col]=N;
    	} 
    	if (N!=ANS[row][col])
    	{
			int p=0;
    		for (int i=0; i<3; i++)
    		{
				if (ANS[i][col]==N)
				{
					cout<<"�q���F�A���O�P���T���צb�P��ΦP�C�A�п�J�ƦrN�B��B�C (�H�Ů�j�})"<<endl;
					p=1;
					break;
				}	
    		}
    		for (int i=0; i<3; i++)
    		{
				if (ANS[row][i]==N)
				{
					cout<<"�q���F�A�O�P���T���צb�P��ΦP�C�A�п�J�ƦrN�B��B�C (�H�Ů�j�})"<<endl;
					p=1;
					break;
				}	
    		}
    		if (p==0)
    		{
    			cout<<"�q���F�A�п�J�ƦrN�B��B�C (�H�Ů�j�})"<<endl;
    		}
    	}
    	
    	cout<<"          *         *           "<<endl;
		cout<<"    "<<ANS2[0][0]<<"     *    "<<ANS2[0][1]<<"    *     "<<ANS2[0][2]<<"     "<<endl;
		cout<<"          *         *           "<<endl;
		cout<<"*******************************"<<endl;
		cout<<"          *         *           "<<endl;
		cout<<"    "<<ANS2[1][0]<<"     *    "<<ANS2[1][1]<<"    *     "<<ANS2[1][2]<<"     "<<endl;
		cout<<"          *         *           "<<endl;
		cout<<"*******************************"<<endl;
		cout<<"          *         *           "<<endl;
		cout<<"    "<<ANS2[2][0]<<"     *    "<<ANS2[2][1]<<"    *     "<<ANS2[2][2]<<"     "<<endl;
		cout<<"          *         *           "<<endl;
    	cout<<""<<endl;
    	cout<<""<<endl;
    	cout<<""<<endl;
    	
    	int total=0;
    	for (int i=0; i<3; i++)
    	{
    		for (int j=0; j<3; j++)
    		{
    			total=total+ANS2[i][j];
    		}
    	}
    	if (total==45)
    	{
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
    }
}
