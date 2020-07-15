//create student database
#include<iostream>
using namespace std;
class Student
{
	string name, sub;
	int rno;
	public:
	Student(){
		name="";
		sub="";
		rno=0;
	}
	Student(int rno, string sub, string name){
		this->name=name;
		this->sub=sub;
		this->rno=rno;
	}
	
	
	
	void display();
	friend class exam;
};


void Student :: display(){
	cout<<"name- "<<name<<endl;
	cout<<"roll number- "<<rno<<endl;
	cout<<"subject- "<<sub<<endl;
}	
class exam{
	int subcode, intmarks, unimarks;
	public:
	void accept();
	void display();
};
void exam :: accept(){
	cout<<"enter subject code- ";
	cin>>subcode;
	cout<<"\nenter internal marks- ";
	cin>>intmarks;
	cout<<"\nenter university marks- ";
	cin>>unimarks;
}

void exam :: display(){
	cout<<"subject code- "<<subcode<<endl;
	cout<<"internam marks- "<<intmarks<<endl;
	cout<<"university marks- "<<unimarks<<endl;
}

int main(){
	int r; 
	string str;
	string n;
	
	cout<<"enter name- ";
	cin>>n;
	cout<<"\nenter roll number- ";
	cin>>r;
	cout<<"\nenter subject- ";
	cin>>str;
	//Student s[i](r,str,n);
	exam *e=new exam;
	e->accept();
	
	
	Student s(r,str,n);
	
	cout<<"\nStudent record-\n"<<endl;
	s.display();
	e->display();
	
	
	delete e;
	return 0;
}   

