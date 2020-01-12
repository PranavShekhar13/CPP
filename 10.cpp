/*Write a class to represent a vector( a series of float values).Include member functions to perform the following task:

a)To create the vector
b)To modify the value of a given element 
c)To multiply by a scalar value
d)To display the vector in the form(10,20,30)
*/

#include<iostream>
using namespace std;

class vect
	{
		private:
			float i,j,k;

		public:
			void ini()
				{
					cout<<"Input i j k values: ";
					cin>>i>>j>>k;
				}

			void mod()
				{
					cout<<"Initial Values: ";
					cout<<i<<"i+"<<j<<"j+"<<k<<"k"<<endl;
					
					cout<<"Input Values to update: ";
					cin>>i>>j>>k;
				}
			void sc()
				{	float a;
					cout<<"Input Scaler: ";
					cin>>a;
					i*=a; j*=a; k*=a;
					cout<<"Updated Values: ";
					cout<<i<<"i+"<<j<<"j+"<<k<<"k"<<endl;
				}
	
			void dis()
				{
					cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
				}
	};

int main()
	{
		vect v;
		v.ini();
		v.mod();
		v.sc();
		v.dis();
		return 0;
		}
