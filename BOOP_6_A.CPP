#include<iostream.h>
#include<conio.h>
class Distance
{
	private:
		int feet;
		int inches;
	public:
		void set_distance()
		{
			cout<<"Enter feet:";
			cin>>feet;
			cout<<"Enter the inches:";
			cin>>inches;
		}
		void get_distance()
		{
			cout<<"Distance is feet="<<feet<<", inches= "<<inches<<endl;
		}
		void add(Distance d1, Distance d2)
		{
			feet = d1.feet + d2.feet;
			inches = d1.inches + d2.inches;
		}
};
void main()
{
	clrscr();
	Distance d1, d2, d3;
	d1.set_distance();
	d2.set_distance();
	d3.add(d1, d2);
	d3.get_distance();
	getch();
}