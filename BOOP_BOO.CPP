#include<iostream.h>
#include<conio.h>
class book{
public:

int cod;
char name[20];
int aut;
char pr[20];

void getdata()
{
	cout<<"enter book code"<<endl;
	cin>>cod;
	cout<<"enter book name"<<endl;
	cin>>name;
	cout<<"enter book auther"<<endl;
	cin>>aut;
	cout<<"enter book price"<<endl;
	cin>>pr;
}
void display()
{
cout<<"code="<<cod<<endl;
cout<<"name="<<name<<endl;
cout<<"aut="<<aut<<endl;
cout<<"price="<<pr<<endl;
}
};
int main()
{
clrscr();
	book s[10];
	for(int i=0;i<2;i++)
	{
		cout<<"enter book data:"<<endl;
		s[i].getdata();
		cout<<"display book data:"<<endl;
		s[i].display();
	}
getch();
return 0;
}
