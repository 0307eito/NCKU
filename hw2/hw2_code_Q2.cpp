#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	cout<<"　　 ∩＿＿＿＿∩"<<endl;
	cout<<"　　 |   /　　　\\ ＼"<<endl;
	cout<<"　　/　　●　　　● |"<<endl;
	cout<<"　 |　　　( _●_)　 |  幾A幾B猜數字 !!"<<endl;
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
    
    int ANS=8462;
    int count=0;
    cout<<"請輸入數字N:";
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
			cout<<A_count<<"A"<<B_count<<"B"<<"，答案正確"<<endl;
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
		cout<<A_count<<"A"<<B_count<<"B"<<"，請輸入數字N:";
	}
}
