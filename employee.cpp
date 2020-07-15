//employee database
//roll no- 21333
//date- 23/07/18
#include<iostream>
using namespace std;

class personaldata
{
    protected:
       string name,addr;
       char dob[10];
       long phoneno;
       

    public:
       
       void showp()
        {
        	cout<<"name:\t"<<name<<endl;
        	cout<<"addr:\t"<<addr<<endl;
        	cout<<"date of birth:\t"<<dob<<endl;
        	cout<<"contact no:\t"<<phoneno<<endl;
        
        }   
};

class academics
{
 	protected:
 	   float ssc,hsc;
 	   string degree;
 	public:
 	
 	   void showa()
 	   {
 	   	cout<<"ssc marks:\t"<<ssc<<endl;
 	   	cout<<"hsc marks:\t"<<hsc<<endl;
 	   	cout<<"qualification:\t"<<degree<<endl;        
 	   }   
};

class profesion
{
     protected:
	string company,current_job;
	 int exp;
	 
     public:
         void showpro()
         {
          	cout<<"currently working in:\t"<<company<<endl;
          	cout<<"current job is:\t"<<current_job<<endl;
          	cout<<"experience of\t"<<exp<<"\tyears"<<endl; 
         }	 
};

class biodata:public personaldata,public academics,public profesion
{
 	public:
 	  void accept()
 	  {
          	cout<<"enter name\t";
          	gets(name);
          	cout<<"enter address\t";
          	gets(addr);
          	cout<<"enter dob\t";
          	for(int i=0;i<10;i++)
          	{cin>>dob[i];}
          	cout<<"enter contact no\t";
          	cin>>phoneno;
          	cout<<"enter ssc marks\t";
          	cin>>ssc;
          	cout<<"enter hsc marks\t";
          	cin>>hsc;   
          	cout<<"enter qualification\t";
          	gets(degree);
          	cout<<"enter comapany\t";
          	gets(company);
          	cout<<"enter current job\t";
          	gets(current_job);
          	cout<<"enter no of years of experience\t";
          	cin>>exp;  	  
 	  }
 	  
 	  void display()
 	  {
 	  	showp();
 	  	showa();
 	  	showpro();
 	  	
 	  }
};
main()
{
   biodata b;
   b.accept();
   b.display();
}

