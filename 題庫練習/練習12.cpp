#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,m;
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	for (int i=1; i<=n; i++){
		
		int min=0;
		int max=0;
		
		for (int j=1; j<=m; j++){
			
			int score;
			cin>>score;
			
			if (j==1) {
				min=score;
				max=score;
			}
			if (score>max) {
				max=score;
			}
			if (score<min) {
				min=score;
			}
		}
		cout<<min<<" "<<max<<endl;
	}	
} 
