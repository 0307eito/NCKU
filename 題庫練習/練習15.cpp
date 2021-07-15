#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,m;
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	int data[n][m];
	
	for (int i=1; i<=n; i++){
		
		int total=0;

		for (int j=1; j<=m; j++){
			
			int score;
			cin>>score;
			
			data[i][j]=score;
		}
	}
	
	
	for (int i=1; i<=m; i++){
		
		int total=0;
		
		for (int j=1; j<=n; j++){
			
			total+=data[j][i];
			
	    }
		
		cout<<total<<endl;
	}
}
