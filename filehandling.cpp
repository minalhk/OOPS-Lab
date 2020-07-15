//============================================================================
// Name        : filehandling.cpp
// Author      : minal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include<fstream>
using namespace std;

int main() {
	char s;
	do{
	cout<<"enter name and roll no"<<endl;
	int r;
	string name;
	cin>>name>>r;

	ofstream stu;
	stu.open("oopl.txt",ios::out|ios::app);
	if(stu.is_open())
	{
		stu<<"name\t"<<name<<"\troll no"<<r<<endl;
		stu.close();
	}
	else{
		cout<<"\nsomething went wrong"<<endl;
	}

	ifstream infile;
	infile.open("oopl.txt",ios::in|ios::app);
	string line;
	if(infile.is_open())
	{
		while(getline(infile,line))
		{
			cout<<line;
		}
		infile.close();
	}
	else
	{
		cout<<"file not available"<<endl;
	}
	cout<<"enter y to continue else enter n"<<endl;
	cin>>s;
	
	}while(s=='y');
	return 0;
}

