#include<bits/stdc++.h>
using namespace std;
char fnd[1024]="ps -aux | grep Autoclicker > QuitingdetectTmp.txt";
char rmv[1024]="./remove.sh";
void sleep(int ms)
{
	for(long long i=1;i<=1LL*ms*705000;i++);
}
int main()
{
	string str;
	while(1)
	{
		system(fnd);
		freopen("QuitingdetectTmp.txt","r",stdin);
		bool quit=1;
		while(cin>>str)
		{
			if(str=="./Autoclicker")
			{
				quit=0;
				break;
			}
		}
		fclose(stdin);
		if(quit)
		{
			system(rmv);
		}
		sleep(100);
	}
}