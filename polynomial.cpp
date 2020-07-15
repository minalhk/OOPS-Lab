#include<iostream>
#include<math.h>
using namespace std;

class polynomial{
	int coeff1,coeff2,coeff3;
	public:
	
	polynomial(){
		coeff1=0;
		coeff2=0;
		coeff3=0;
	}
	
	polynomial operator +(polynomial b){
		polynomial sum;
		sum.coeff1=coeff1+b.coeff1;
		sum.coeff2=coeff2+b.coeff2;
		sum.coeff3=coeff3+b.coeff3;
		return sum;
		
	}
	void eval(int x)
    {
      int val;
      
      val=(coeff1*x*x)+(coeff2*x)+coeff3;
      if(val==0)
       cout<<x<<" satisfies given equation"<<endl;
      else
       cout<<x<<" does not satisfies given equation"<<endl;    
     
   }
   int roots()
   {
     float d;
     d=(coeff2*coeff2)-(4*coeff1*coeff3);
     if(d==0)
     {
      cout<<(-coeff2)/(2*coeff1);
     }
     if(d<0)
       cout<<"imaginary"<<endl;
     if(d>0)
     {
      cout<<((-coeff2)+(sqrt(d)))/(2*coeff1)<<" and "<<((-coeff2)-(sqrt(d)))/(2*coeff1)<<endl;
     }  
   }
	
	friend istream & operator>>(istream &, polynomial &);
	friend ostream & operator<<(ostream &, polynomial &);
};
istream & operator>>(istream &in, polynomial &p){
	cout<<"enter coefficient with descending order of their degrees- "<<endl;
	in>>p.coeff1>>p.coeff2>>p.coeff3;
}
ostream & operator<<(ostream &out , polynomial &p){
	out<<p.coeff1<<"x^2+"<<p.coeff2<<"x^1+"<<p.coeff3<<endl;
}

int main(){
	polynomial p1,p2,sum;
	cout<<"enter polynomial 1- "<<endl;
	cin>>p1;
	cout<<"polynomial 1 is- ";
	cout<<p1;
	cout<<"\nenter polynomial 2- "<<endl;
	cin>>p2;
	cout<<"polynomial 2 is- ";
	cout<<p2;
	sum=p1+p2;
	cout<<"\nsum= ";
	cout<<sum;
	cout<<"\nenter value to evaluate polynomial"<<endl;
	int x;
	cin>>x;
	p1.eval(x);
	cout<<"\nroots of the eqation are- ";
	p1.roots();
	return 0;
	
}
