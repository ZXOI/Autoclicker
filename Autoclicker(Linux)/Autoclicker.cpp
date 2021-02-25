#include<bits/stdc++.h>
using namespace std;
char cleft[1024]="./Clickleft &";
char cright[1024]="./Clickright &";
char croller[1024]="./Clickroller &";
char cpleft[1024]="g++ Clickleft.cpp -o Clickleft";
char cpright[1024]="g++ Clickright.cpp -o Clickright";
char cproller[1024]="g++ Clickroller.cpp -o Clickroller";
char kleft[1024]="killall -9 Clickleft";
char kright[1024]="killall -9 Clickright";
char kroller[1024]="killall -9 Clickroller";
char ktool[1024]="killall -9 xdotool";
char clr[1024]="clear";
// char pre[1024]="chmod 777 ./remove.sh";
char rmv[1024]="./remove.sh &";
void sleep(int ms)
{
	for(long long i=1;i<=1LL*ms*705000;i++);
}
void Compile()
{
	system(cpleft);
	system(cpright);
	system(cproller);
}
void Stopclicking()
{
	system(kleft);
	system(kright);
	system(kroller);
	system(ktool);
	system(clr);
	sleep(100);
	cout<<"Stopped clicking."<<endl;
	cout<<"Move your mouse to the place you want and press the keys+Enter to start clicking:"<<endl;
	cout<<"    Press L for the left key."<<endl;
	cout<<"    Press M for the roller."<<endl;
	cout<<"    Press R for the right key."<<endl;
	cout<<"Or press Q to quit"<<endl;
}
int main()
{
	cout<<"Loading..."<<endl;
	Compile();
	system(clr);
	sleep(100);
	cout<<"This is an aotoclicker."<<endl;
	cout<<"Move your mouse to the place you want and press the keys+Enter to start clicking:"<<endl;
	cout<<"    Press L for the left key."<<endl;
	cout<<"    Press M for the roller."<<endl;
	cout<<"    Press R for the right key."<<endl;
	cout<<"Or press Q to quit"<<endl;
	char c;
	while(c=getchar())
	{
		if(c!='l'&&c!='L'&&c!='m'&&c!='M'&&c!='r'&&c!='R'&&c!='s'&&c!='S'&&c!='q'&&c!='Q')
		{
			continue;
		}
		system(clr);
		sleep(100);
		if(c=='l'||c=='L')
		{
			cout<<"Clicking the left key."<<endl;
			cout<<"Press S to stop."<<endl;
			system(cleft);
		}
		if(c=='m'||c=='M')
		{
			cout<<"Clicking the roller."<<endl;
			cout<<"Press S to stop."<<endl;
			system(croller);
		}
		if(c=='r'||c=='R')
		{
			cout<<"Clicking the right key."<<endl;
			cout<<"Press S to stop."<<endl;
			system(cright);
		}
		if(c=='s'||c=='S')
		{
			cout<<"Stopping."<<endl;
			// for(long long i=1;i<=1000000000;i++);
			Stopclicking();
		}
		if(c=='q'||c=='Q')
		{
			break;
		}
	}
	Stopclicking();
	system(clr);
	sleep(100);
	// system(pre);
	system(rmv);
	return 0;
}