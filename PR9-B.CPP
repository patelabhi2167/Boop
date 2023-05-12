#include<conio.h>
#include<iostream.h>
class temp
{
	private:
		int x,y;
	public:
		void get()
		{
			cout<<"Enter first number:";
			cin>>x;
			cout<<"Enter second number:";
			cin>>y;
		}
		int min(temp t1)
		{
			if(t1.x > t1.y)
				cout<<"first number is largest";
			else
				cout<<"second number is largest";
			return(x,y);
		}
};
void main()
	{
		temp t2,t3;
		clrscr();
		t2.get();
		t3.min(t2);
		getch();
	}




