//===================================================================
// Name        : 24.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//====================================================================

#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
	public:
	string name,bdate,tphn;
	Person getdata1();
	void display1(Person);
};

Person Person::getdata1()
{
	Person p;
	//string arr1;
	cout<<"Enter the name"<<endl;
	cin>>p.name;
	cout<<"Enter the birth date"<<endl;
	cin>>p.bdate;
	cout<<"Enter the telephone number"<<endl;
	cin>>p.tphn;
	//arr1=p.tphn;
	return p;
}

void Person::display1(Person p)
{
	cout<<"Person Information"<<endl;
	cout<<endl;
	cout<<"Name : "<<p.name<<endl;
	cout<<"Birth date : "<<p.bdate<<endl;
	cout<<"Telephone Number : "<<p.tphn<<endl;
	cout<<endl;
}

class Item
{
  public:
	int code,quantity;
	float cost;
	string name;
	Item getdata2();
	void display2(Item);
};

Item Item::getdata2()
{
	int arr2;
	Item i;
	cout<<"Enter the item name"<<endl;
	cin>>i.name;
	cout<<"Enter the item code"<<endl;
	cin>>i.code;
	arr2=i.code;
	cout<<"Enter the quantity"<<endl;
	cin>>i.quantity;
	cout<<"Enter the cost"<<endl;
	cin>>i.cost;
	return i;
}

void Item::display2(Item i)
{
	cout<<"Product Information"<<endl;
	cout<<endl;
	cout<<"Name : "<<i.name<<endl;
	cout<<"Code : "<<i.code<<endl;
	cout<<"Quantity : "<<i.quantity<<endl;
	cout<<"Cost : "<<i.cost<<endl;
	cout<<endl;
}

int main()
{
	int a,c;
	int arr1[10],arr2[10];
	Person p[10],p1;
	Item i[10],i1;
	int n;
	cout<<"Enter the number of customers"<<endl;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		p[j]=p1.getdata1();
		i[j]=i1.getdata2();
		//arr1[j]=p[j].tphn;
        arr2[j]=i[j].code;
	}
	for(int j=0;j<n;j++)
	{
		p[j].display1(p[j]);
		i[j].display2(i[j]);
	}
	for(int j=0;j<n;j++)
	{
		cout<<arr2[j]<<endl;
	}
	sort(arr2,arr2+n);
	cout<<"Sorted array is"<<endl;
	for(int j=0;j<n;j++)
	{
		cout<<arr2[j]<<endl;
	}
    cout<<"Enter the code"<<endl;
    cin>>c;
	a=(int)binary_search(arr2,arr2+n,c);
	cout<<a<<endl;
	if(a==1)
	{
		cout<<"Item found"<<endl;
	}
	else
	{
		cout<<"Item not found"<<endl;
	}
	/*cout<<"Enter the telephone number of the person whose record is to be deleted"<<endl;
	int t;
	cin>>t;
	int t1=(int)binary_search(arr1,arr1+n,t);*/
	return 0;
}





/*Algorithm:
Step 1: Start.
Step 2: Insert the record.
Step 3: Display the record.
Step 4: Search the record by their code.
Step 5: Sort the record.
Step 6: Delete the record selected by user.
Step 7: Exit.*/

/*
  Write C++ program using STL for sorting and
  searching with user defined records such as
  person record (Name, birth, date, telephone no),
  item record (item code, item name, quantity and cost).
*/
