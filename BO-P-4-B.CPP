#include<iostream.h>
#include<conio.h>

int sum(int a,int b, int c=0,int d=0)
{
	return(a+b+c+d);
}
void main()
{
	clrscr();
	cout<<sum(100,5) <<endl;
	cout<<sum(100,5,15) <<endl;
	cout<<sum(100,5,15,0) <<endl;

	getch();
}