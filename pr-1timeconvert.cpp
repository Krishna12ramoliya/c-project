#include<iostream>
using namespace std;


	
void second()
{
	int second;
	cout<<"enter tottal second:";
	cin>>second;
	int h,m,s;
	h=second/3600;
	m=second%3600/60;
	s=second%60;
	cout<<"HH:MM:SS=>"<<h<<":"<<m<<":"<<s;
	cout<<endl;
	
}

void hour()
{
	int hour,min,sec;
	cout<<"Enter hour:";
	cin>>hour;
	cout<<"Enter min:";
	cin>>min;
	cout<<"Enter second:";
	cin>>sec;
	
	
	int h=(hour*3600)+(min*60)+(sec);
	cout<<"total second:"<<h;
	
}



int main()
{
	second();
   hour();
}
/*
enter tottal second:4200
HH:MM:SS=>1:10:0
Enter hour:4
Enter min:34
Enter second:30
total second:16470
*/