#include<iostream.h>
#include<conio.h>
class student{
int r_no;
char name[20];
int age;
char br[20];
static int c;
public:
void getdata()
{
	cout<<"enter roll no"<<endl;
	cin>>r_no;
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"enter age"<<endl;
	cin>>age;
	cout<<"enter branch"<<endl;
	cin>>br;
	c++;
}
void display()
{
cout<<"roll no="<<r_no<<endl;
cout<<"name="<<name<<endl;
cout<<"age="<<age<<endl;
cout<<"branch="<<br<<endl;
}
	static void get_count();
};
	void student::get_count()
	{
		cout<<"totel number of object created are:"<<c<<endl;
	}
int student::c;
int main()
{
int ch;
clrscr();
	do{
		cout<<"press 1 for cration of object."<<endl;
		cout<<"press 2 for countin created object."<<endl;
		cout<<"enter your choice:";
		cin>>ch;
	switch(ch)
	{
		case 1:
		student s;
		cout<<"enter student data"<<endl;
			s.getdata();
		cout<<"display student data"<<endl;
			s.display();
		break;
		case 2:
		student::get_count();
		break;
		defult:
	}
}while(ch<=2);
getch();
return 0;
}


