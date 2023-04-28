#include<iostream.h>
#include<conio.h>
struct student{
int r_no;
char name[20];
int age;
char br[20];
};

int main(){
{
struct s[10];
int i,n;
clrscr();
cout<<"enter number of students:";
cin>>n;
cout<<"enter student detils:"<<endl;
for(i=0;i<n;i++)
{
	cout<<"enter roll no:";
	cin>>s[i].r_no;
	cout<<"enter name:";
	cin>>s[i].name;
	cout<<"enter the age:";
	cin>>s[i].age;
	cout<<"enter the brabnch:";
	cin>>s[i].br;
}
cout<<"display student detils:"<<endl;
for(i=0;i<n;i++)
{
cout<<"student roll no:"<<s[i].r_no<<endl;
cout<<"student name:"<<s[i].name<<endl;
cout<<"student age:"<<s[i].age<<endl;
cout<<"student brance:"<<s[i].br<<endl;
cout<<endl;
}
return0;
}



