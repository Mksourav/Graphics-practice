#include<iostream.h>
#include<conio.h>
class cal
{
	protected:
		int a,b;
};
class sum:public cal
{	private:
		int add;
	public:
		void in()
		{
			cout<<"Enter the two number for addition:";
			cin>>a>>b;
		}

		void out()
		{
			add=a+b;
			cout<<add;
		}
};

class subt:public cal
{
	private:
		int sub;
	public:
		void in()
		{
			cout<<"Enter the two number for subtracting:";
			cin>>a>>b;
		}

		void out()
		{
			sub=a-b;
			cout<<sub;
		}
};

void main()
{
	sum s1;
	subt s2;
	clrscr();
	s1.in();
	s1.out();
	s2.in();
	s2.out();
	getch();
}