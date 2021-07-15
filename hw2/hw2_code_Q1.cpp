#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	cout<<"　　 ∩＿＿＿＿∩"<<endl;
	cout<<"　　 |   /　　　\\ ＼"<<endl;
	cout<<"　　/　　●　　　● |"<<endl;
	cout<<"　 |　　　( _●_)　 |  大小猜數字 !!"<<endl;
	cout<<" ／ 　 　　 |∪|　　＼"<<endl;
	cout<<"/　＿＿　           > )"<<endl;
	cout<<"(＿＿＿）　　　　 (_／"<<endl;
	cout<<"　|　　　　　　 ／"<<endl;
	cout<<"　|　　／＼　  ＼"<<endl;
	cout<<"　|　/　　　 )　 )"<<endl;
	cout<<"　∪　　　 （　 \\"<<endl;
	cout<<"　　　　　　 ＼＿)"<<endl;
	system("pause");
	cout<<""<<endl;
	cout<<"####################################################"<<endl;
	cout<<"                       猜數字                       "<<endl;
    cout<<"####################################################"<<endl;
    cout<<""<<endl;
    int ANS=66;
    cout<<"請輸入數字N:";
    int count=0;
    while (true)
	{
		int N;
    	cin>>N;
    	count+=1;
    	if (N<ANS)
    	{
    		cout<<"比答案小，請輸入數字N:";
    	}
    	if (N>ANS)
    	{
    		cout<<"比答案大，請輸入數字N:";
    	}
    	if (N==ANS)
    	{
    		cout<<"答案正確"<<endl;
    		cout<<""<<endl;
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
