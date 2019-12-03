#include<iostream>
using namespace std;
class complex
{
	int r;
	int i;
	public:
	 complex()
	 {
	 r=0;
	 i=0;
	 }
	 complex operator+(complex);
	 complex operator*(complex);
	 friend istream &operator >>(istream &input,complex &t)
	 {
	 cout<<"Enter the real part\n";
	 input>>t.r;
	 cout<<"Enter the imaginary part\n";
	 input>>t.i;
	 }
	 friend ostream &operator <<(ostream &output,complex &t)
	 {
	 output<<t.r<<"+"<<t.i<<"i\n";
	 }
};
complex complex::operator+(complex c)
{
	complex temp;
	temp.r = r+c.r;
	temp.i = i+c.i;
	return(temp);
}
complex complex::operator*(complex c)
{
	complex temp1;
	temp1.r = (r*c.r)-(i*c.i);
	temp1.i = (i*c.r)+(r*c.i);
	return (temp1);
}
int main()
{
	complex c1,c2,c3,c4;
	cout<<"Default constructor value=\n\n";
	cout<<c1;
	cout<<"\nEnter the 1st number\n\n";
	cin>>c1;
	cout<<"\nEnter the 2nd number\n\n";
	cin>>c2;
	c3 = c1+c2;
	c4 = c1*c2;
	cout<<"\nThe first number is ";
	cout<<c1;
	cout<<"\nThe second number is ";
	cout<<c2;
	cout<<"\nThe addition is ";
	cout<<c3;
	cout<<"\nThe multiplication is ";
	cout<<c4;
	return 0;
}

