#include<iostream.h>
class sum
{
	protected:
		int a,b;
};

class subt
{
	protected:
		int c,d;
};

class mult:public subt
{
	protected:
		int m1,m2;
};

class div:public sum,mult
{
	protected:
		int di1,di2;
	public:
		void in()
		{
			cout<<"Enter two number for add:";
			cin>>a>>b;

			cout<<"Enter two number for subtract:";
			cin>>c>>d;

			m1=a*b;
			m2=c*d;

			di1=a/b;
			di2=c/d;
		}

		void out()
		{
			cout<<"sum of a & b: "<<a+b;
			cout<<"subtract d from c:  "<<c-d;
			cout<<"a*b="<<m1<<",c*d="<<m2<<",a/b="<<di1<<",c/d="<<di2;
		}
};

void main()
{
	div v;
	clrscr;
	v.in();
	v.out();
}
