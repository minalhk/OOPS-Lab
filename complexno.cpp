#include<iostream>
using namespace std;
 
class complex{
	float real,img;
	public:
	
	complex(){
		real=0.0;
		img=0.0;
	}
	complex operator +(complex b){
		complex sum;
		sum.real=real+b.real;
		sum.img=img+b.img;
		return sum;
	}
	complex operator *(complex b){
		complex mul;
		mul.real=(real * b.real)-(img * b.img);
		mul.img=(real * b.img)+(img * b.real);
		return mul;
	}
	friend istream & operator>>(istream &, complex &);
	friend ostream & operator<<(ostream &, complex &);	
};

istream & operator>>(istream & in, complex &c){
	cout<<"enter real part "<<endl;
	in>>c.real;
	cout<<"enter img part "<<endl;
	in>>c.img;
	return in;
}

ostream & operator<<(ostream & out, complex &c){
	
	out<<c.real<<" + "<<c.img<<" i"<<endl;
	return out;
}

int main(){
	cout<<"\xb"<<endl;
	cout<<"\xDB2"<<endl;
	cout<<"\xB2"<<endl;
	return 0;
	char c;
	do{
	complex c1,c2,sum,mul;
	cin>>c1;
	cout<<"complex no 1- ";
	cout<<c1;
	cin>>c2;
	cout<<"\ncomplex no 2- ";
	cout<<c2;
	cout<<"\naddition= ";
	sum=c1+c2;
	cout<<sum;
	cout<<"\nmultiplication= ";
	mul=c1*c2;
	cout<<mul;
	cout<<"want to try for another number(y/n)"<<endl;
	cin>>c;
	}while(c=='y');
	return 0;
}
