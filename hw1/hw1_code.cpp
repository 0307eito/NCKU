#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"��J��ӥ����N�PM(�H�Ů�j�}) : ";
	int N,M;
	scanf("%d %d",&N,&M);
    
    //A. �L�XN�Ӥ���"#"
    cout<<" "<<endl;
    cout<<"A.  ";
    for(int i=0; i<N; i++)
    {
    	cout<<'#';
	}
	cout<<""<<endl;
	//B. �L�XN��M�������ƦC
	cout<<" "<<endl;
	cout<<"B.  ";
	if (M>N)
	{
	for(int i=N; i<=M; i++)
    {
    	cout<<i<<" ";
	}
    }
    if (N>M)
	{
	for(int i=M; i<=N; i++)
    {
    	cout<<i<<" ";
	}
    }
    cout<<""<<endl;
    //C. �L�X�eM�Ӥj�g�^��r��
    cout<<" "<<endl;
    cout<<"C.  ";
    for(int i=1; i<=M; i++)
    {
    	switch(i)
	{
		case 1:
			printf("A");
			break;
		case 2:
			printf("B");
			break;
		case 3:
			printf("C");
			break;
		case 4:
			printf("D");
			break;
		case 5:
			printf("E");
			break;
		case 6:
			printf("F");
			break;
		case 7:
			printf("G");
			break;
		case 8:
			printf("H");
			break;
		case 9:
			printf("I");
			break;
		case 10:
			printf("J");
			break;
		case 11:
			printf("K");
			break;
		case 12:
			printf("L");
			break;
		case 13:
			printf("M");
			break;
		case 14:
			printf("N");
			break;
		case 15:
			printf("O");
			break;
		case 16:
			printf("P");
			break;
		case 17:
			printf("Q");
			break;
		case 18:
			printf("R");
			break;
		case 19:
			printf("S");
			break;
		case 20:
			printf("T");
			break;
		case 21:
			printf("U");
			break;
		case 22:
			printf("V");
			break;
		case 23:
			printf("W");
			break;
		case 24:
			printf("X");
			break;
		case 25:
			printf("Y");
			break;
		case 26:
			printf("Z");
			break;
	}
    }
    cout<<""<<endl;
    //D. �L�X��N�Ӥp�g�^��r��
    cout<<" "<<endl;
    cout<<"D.  ";
    for(int i=0; i<=N; i++)
    {
    	switch(i)
	{
		case 1:
			printf("z");
			break;
		case 2:
			printf("y");
			break;
		case 3:
			printf("x");
			break;
		case 4:
			printf("w");
			break;
		case 5:
			printf("v");
			break;
		case 6:
			printf("u");
			break;
		case 7:
			printf("t");
			break;
		case 8:
			printf("s");
			break;
		case 9:
			printf("r");
			break;
		case 10:
			printf("q");
			break;
		case 11:
			printf("p");
			break;
		case 12:
			printf("o");
			break;
		case 13:
			printf("n");
			break;
		case 14:
			printf("m");
			break;
		case 15:
			printf("l");
			break;
		case 16:
			printf("k");
			break;
		case 17:
			printf("j");
			break;
		case 18:
			printf("i");
			break;
		case 19:
			printf("h");
			break;
		case 20:
			printf("g");
			break;
		case 21:
			printf("f");
			break;
		case 22:
			printf("e");
			break;
		case 23:
			printf("d");
			break;
		case 24:
			printf("c");
			break;
		case 25:
			printf("b");
			break;
		case 26:
			printf("a");
			break;
    }
    }
    cout<<""<<endl;
    //E. �YM���_�ơA�h�L�X1 3 5...M�A�YM�����ơA�h�L�XM M-2 M-4...2 
    cout<<" "<<endl;
    cout<<"E.  ";
    if (M%2==1 || M==1)
    {
    	for (int i=1; i<=M; i+=2)
    	{
    		cout<<i<<" ";
		} 
    }
    if (M%2==0)
    {
    	for (int i=M; i>=2; i-=2)
    	{
    		cout<<i<<" ";
    	}
    }
    cout<<""<<endl;
    //F. �L�XN��M�����Ҧ�3�����Ƥ�����`�M
    cout<<" "<<endl;
    cout<<"F.  ";
    int ans=0;
    string element="";
	if (M>N)
	{
	for(int i=N; i<=M; i++)
    {
    	if (i%3==0)
    	{
    		ans=ans+i;
    	}
	}
    }
    if (N>M)
	{
	for(int i=M; i<=N; i++)
    {
    	if (i%3==0)
    	{
    		ans=ans+i;
    	}
	}
    }
    cout<<ans;
    cout<<"�i";
    if (M>N)
	{
    for(int i=N; i<=M; i++)
    {
    	if (i%3==0 && i<=M-3)
    	{
    		cout<<i<<"+";
    	}
        else if (i%3==0)
    	{
    		cout<<i;
    	}
	}
    }
    if (N>M)
	{
    for(int i=M; i<=N; i++)
    {
    	if (i%3==0 && i<=N-3)
    	{
    		cout<<i<<"+";
    	}
    	else if (i%3==0)
    	{
    		cout<<i;
    	}
	}
    }
    cout<<"�j";
    cout<<""<<endl;
    //G. �L�XN M���Ҧ��]��
    cout<<" "<<endl;
    cout<<"G.  ";
    int P=M*N;
	for (int i=1; i<=P; i++)
	{
		if (P%i==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<""<<endl;
	//H. �L�X1-100���A�i�H�P�ɳQN�PM�㰣���Ʀr
	cout<<" "<<endl;
	cout<<"H.  ";
	int T=0;
    for (int i=1; i<=100; i++)
    {
    	if (i%N==0 && i%M==0)
    	{
    		T=1; 
    		cout<<i<<" ";
    	}
    }
    if (T!=1)
    {
    	cout<<"�L";
    }
    cout<<""<<endl;
	//I. �L�XN�PM���̤j���]��
	cout<<" "<<endl;
	cout<<"I.  ";
	int L=0;
    if (M>N)
    {
    	for (int i=1; i<=N; i++)
    	{
    		if (M%i==0 && N%i==0)
    		{
    			L=i;
    		}
    	}
    }
    if (N>M)
    {
    	for (int i=1; i<=M; i++)
    	{
    		if (M%i==0 && N%i==0)
    		{
    			L=i;
    		}
    	}
    }
    cout<<L;
    cout<<""<<endl;
	//J. �L�XN�PM���̤p������
	cout<<" "<<endl;
	cout<<"J.  ";
	int Ans=0;
	if (M>N)
	{
		for (int i=M; i<M*N; i++)
		{
			if (i%M==0 && i%N==0)
			{
				Ans=i;
				break;
			}
		}
	}
	if (N>M)
	{
		for (int i=N; i<M*N; i++)
		{
			if (i%M==0 && i%N==0)
			{
				Ans=i;
				break;
			}
		}
	}
	if (Ans==0) 
	{
		cout<<M*N;
	}
	else
	{
		cout<<Ans;
	}
}
    
