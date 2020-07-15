//exception handling
//date 6/8/18
#include<iostream>
#include<string.h>
using namespace std;

class data{
	int age;
	long income;
	char city;
	int wheels;
	
	public:
	

	void agedata() 
	{
		cout<<"enter age"<<endl;
		label1:
		cin>>age;
		try{
			if(age<18||age>55)
			{
				throw "enter age between 18 to 55";
			}
			/*else
			{
				cout<<age<<endl;
			}*/
		}
		catch(const char* str)
		{
			cout<<str<<endl;
			cout<<"enter age again"<<endl;
			goto label1;
		}
	}
	void incomedata()
	{
		cout<<"enter monthly income"<<endl;
		label2:
		cin>>income;
		try{
			if(income<50000||income>100000)
			{
				throw "income shold be >50000 and <100000";
			}
		}
		catch(const char* str)
		{
			cout<<str<<endl;
			cout<<"enter income again"<<endl;
			goto label2;
		}
	}
	
	
	
	void citydata()
	{
		cout<<"enter p for pune\nenter m for mumbai\nenter b for banglore\nenter c for chennai"<<endl;
		label3:
		cin>>city;
		try{
			if(city!='p'&& city!='m'&& city!='b'&& city!='c')
			{
				throw "enter city within the given options";
			}
		}
		catch(const char* str)
		{
			cout<<str<<endl;
			cout<<"enter city again"<<endl;
			goto label3;
		}
	}
	
	void wheelsdata()
	{
		cout<<"enter number of wheels of your vehicle"<<endl;
		label4:
		cin>>wheels;
		try{
			if(wheels!=4)
			{
				throw wheels;
			}
		}
		catch(int x)
		{
			cout<<"no of wheels must be 4"<<endl;
			cout<<"enter no of wheels again"<<endl;
			goto label4;
		}
	}

	void displaydata()
	{
		char z;
		cout<<"age\t"<<age<<endl;
		cout<<"income\t"<<income<<endl;
		cout<<"city\t";
		z=city;
		switch(z)
		{
			case 'p':
			  cout<<"PUNE"<<endl;
			  break;
			case 'm':
			  cout<<"mumbai"<<endl;
			  break;
			case 'b':
			  cout<<"banglore"<<endl;
			  break;
			case 'c':
			  cout<<"chennai"<<endl;
			  break;      
		}
		cout<<"wheels\t"<<wheels<<endl;
		cout<<"**********************************"<<endl;
		cout<<"you are eligible for getting loan"<<endl;
		cout<<"**********************************"<<endl;
	}
};


int main()
{
	data g1;
	g1.agedata();
	g1.incomedata();
	g1.citydata();
	g1.wheelsdata();
	g1.displaydata();
}	
