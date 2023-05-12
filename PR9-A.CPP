#include<conio.h>
#include<iostream.h>
class A
{
	public:
		int age;
		char name[20];
		void put()
		{
		cout<<"Enter Age:";
		cin>>age;
		cout<<"Ente Name:";
		cin>>name;
	}
	void display(A)
	{
		cout<<"Age is:"<<age<<endl;
		cout<<"Nmae is:"<<name;
	}
};
void main()
{
	A d;
	clrscr();
	d.put();
	d.display(d);
	getch();
}