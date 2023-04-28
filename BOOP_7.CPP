#include<iostream.h>
#include<conio.h>
class student{
public:

int r_no;
char name[20];
int age;
char br[20];

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
}
void display()
{
cout<<"roll no="<<r_no<<endl;
cout<<"name="<<name<<endl;
cout<<"age="<<age<<endl;
cout<<"branch="<<br<<endl;
}
};
int main()
{
clrscr();
	student s[10];
	for(int i=0;i<2;i++)
	{
		cout<<"enter student data:"<<endl;
		s[i].getdata();
		cout<<"display student data:"<<endl;
		s[i].display();
	}
getch();
return 0;
}
