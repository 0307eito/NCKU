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
		int num_max=1;
		int num_min=1;
		
		for (int j=1; j<=m; j++){
			
			int score;
			cin>>score;
			
			if (j==1) {
				min=score;
				max=score;
			}
			if (score>max) {
				max=score;
				num_max=j;
			}
			if (score<min) {
				min=score;
				num_min=j;
			}
		}
		cout<<num_min<<" "<<num_max<<endl;
	}	
} 
