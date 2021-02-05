#include<bits/stdc++.h>
using namespace std;
char cmd[1024]="xdotool click 3";
void sleep(int ms)
{
	for(long long i=1;i<=1LL*ms*705000;i++);
}
int main()
{
	while(1)
	{
		system(cmd);
		sleep(10);
	}
}