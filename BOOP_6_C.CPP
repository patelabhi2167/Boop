#include<iostream.h>
#include<conio.h>
class Temprature
{
	private:
	float fahren,celsius;
	public:
	float conversision(float f)
	{
		fahren=f;
		celsius=(fahren-32)*5.0/9.0;
		return celsius;
	}
};
void main()
{
	clrscr();
	Temprature t;
	float f;
	cout<<"enter temperature in fahernhite";
	cin>>f;
	cout<<"teprature is celsius="<<t.conversision(f);
	getch();
}







