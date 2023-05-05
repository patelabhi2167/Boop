#include<iostream.h>
#include<conio.h>
class y;
class x{
int a,b;
public:
void getdata()
{
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
}
void display()
{
	cout<<"content of class x:"<<endl;
	cout<<"---------a--------:"<<a<<endl;
	cout<<"---------b--------:"<<b<<endl;
}
friend void access_private(x,y);
};
class y{
int m,n;
public:
void getdata()
{
	cout<<"enter m:";
	cin>>m;
	cout<<"enter n:";
	cin>>n;
}
void display()
{
	cout<<"content of class y:"<<endl;
	cout<<"---------m--------:"<<m<<endl;
	cout<<"---------n--------:"<<n<<endl;
}
friend void access_private(x,y);
};
void access_private(x p,y q)
	{
		cout<<"output from friend function"<<endl;
		cout<<"content of class x:"<<endl;
		cout<<"---------a--------:"<<p.a<<endl;
		cout<<"---------b--------:"<<p.b<<endl;
		cout<<"content of class y:"<<endl;
		cout<<"---------m--------:"<<q.m<<endl;
		cout<<"---------n--------:"<<q.n<<endl;
	}
	int main()
	{
	clrscr();
	x objx;
	y objy;
	objx.getdata();
	objy.getdata();
	objx.display();
	objy.display();
	access_private(objx,objy);
	getch();
	return 0;
}











































