#include<iostream.h>
#include<conio.h>
inline int cube(int l)
{
	return(l*l*l);
}
void main()
{
	clrscr();
	cout<<"the cube of 3 is :" <<cube(3) <<endl;
	getch();
}