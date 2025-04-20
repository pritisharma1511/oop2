#include<iostream>
using namespace std;
class Complex
{
public:
	int real;
	int img;
	
	Complex ()
	{
		real=0;
		img=0;
	}
	Complex operator+(Complex &c)
	{
		Complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
	}
	friend istream &operator>>(istream &input,Complex &c)
	{
		cout<<"enter real number";
		input>>c.real;
		cout<<"enter img number";
		input>>c.img;
		return input;
	}
	friend ostream &operator<<(ostream &output,Complex &c)
	{
		output<<c.real<<"+"<<c.img<<"i";
		return output;
	}
};
int main()
{
	Complex c1,c2;
	cin>>c1>>c2;
	Complex c3=c1+c2;
	cout<<"sum:"<<c3<<endl;
	return 0;
}

