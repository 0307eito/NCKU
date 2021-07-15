#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	cout<<"　　 ∩＿＿＿＿∩"<<endl;
	cout<<"　　 |   /　　　\\ ＼"<<endl;
	cout<<"　　/　　●　　　● |"<<endl;
	cout<<"　 |　　　( _●_)　 |  九宮格猜數字 !!"<<endl;
	cout<<" ／ 　 　　 |∪|　　＼"<<endl;
	cout<<"/　＿＿　           > )"<<endl;
	cout<<"(＿＿＿）　　　　 (_／"<<endl;
	cout<<"　|　　　　　　 ／"<<endl;
	cout<<"　|　　／＼　  ＼"<<endl;
	cout<<"　|　/　　　 )　 )"<<endl;
	cout<<"　∪　　　 （　 \\"<<endl;
	cout<<"　　　　　　 ＼＿)"<<endl;
	cout<<""<<endl;
	cout<<"規則: 九宮格當中會有隨機排列的數字1到9，要猜出每個數字所對應的正確位置，一次只能猜一個數字。"<<endl;
	cout<<"      猜的數字與正確答案在同一行或者同一列時會告知玩家。"<<endl;
	cout<<""<<endl;
	system("pause");
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"#################################"<<endl;
	cout<<"             猜數字              "<<endl;
    cout<<"#################################"<<endl;
	cout<<""<<endl;
	
	int ANS2[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	cout<<"請輸入數字N、行、列 (以空格隔開)"<<endl;
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
    		cout<<"猜對了，請輸入數字N、行、列 (以空格隔開)"<<endl;
    		ANS2[row][col]=N;
    	} 
    	if (N!=ANS[row][col])
    	{
			int p=0;
    		for (int i=0; i<3; i++)
    		{
				if (ANS[i][col]==N)
				{
					cout<<"猜錯了，但是與正確答案在同行或同列，請輸入數字N、行、列 (以空格隔開)"<<endl;
					p=1;
					break;
				}	
    		}
    		for (int i=0; i<3; i++)
    		{
				if (ANS[row][i]==N)
				{
					cout<<"猜錯了，是與正確答案在同行或同列，請輸入數字N、行、列 (以空格隔開)"<<endl;
					p=1;
					break;
				}	
    		}
    		if (p==0)
    		{
    			cout<<"猜錯了，請輸入數字N、行、列 (以空格隔開)"<<endl;
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
			cout<<"                        結束                        "<<endl;
		    cout<<"####################################################"<<endl;
    		cout<<""<<endl;
    		cout<<"　　 ∩＿＿＿＿∩"<<endl;
			cout<<"　　 |   /　　　\\ ＼"<<endl;
			cout<<"　　/　　＞　　　＜ |"<<endl;
			cout<<"　 |　　　( _●_)　 |  恭喜答對! "<<"一共猜了"<<count<<"次!"<<endl;
			cout<<" ／ 　 　　 |∪|　　＼"<<endl;
			cout<<"/　＿＿　           > )"<<endl;
			cout<<"(＿＿＿）　　　　 (_／"<<endl;
			cout<<"　|　　　　　　 ／"<<endl;
			cout<<"　|　　／＼　  ＼"<<endl;
			cout<<"　|　/　　　 )　 )"<<endl;
			cout<<"　∪　　　 （　 \\"<<endl;
			cout<<"　　　　　　 ＼＿)"<<endl;
    		break;
    	}
    }
}
