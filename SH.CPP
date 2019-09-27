#include<iostream.h>
#include<conio.h>
class base
{
	//private:
	protected:
		int a,b;
	/*public:
		void input()
		{
			cout<<"\nEnter two numbers:";
			cin>>a>>b;
		}
		void out()
		{
			cout<<"\nSum="<<a+b;
		}*/
};
class derived:public base
{
	private:
		int s;
	public:
		void in()
		{
			cout<<"\nEnter two numbers:";
			cin>>a>>b;
			//base::input();
			//base::out();
			//s=a+b;
			//cout<<"\nSum="<<s;
		}
		void out()
		{
			s=a+b;
			cout<<"sum="<<s;
		}
};
void main()
{
	derived d;
	clrscr();
	d.in();
	d.out();
	getch();
}
