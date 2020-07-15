//commmand line arguments
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class cmd
{ 
  string s1,s2;
  public:
    cmd(string a,string b)
    {
      s1=a;
      s2=b;
    }
    void create();
    void replace();
    void display();
};

void cmd::create()
{
  fstream file;
  file.open("file.txt",ios::out);
  if(file.is_open())
  {
    file<<"If you understand say understand , if you don't understand say, don't understand , but if you understand and you say don't understand then how will I understand that you understand , understand "<<endl;
    file.close();
  }
}

void cmd::replace()
{
  fstream file;
  string word;
  file.open("file.txt",ios::in);
  {
    if(file.is_open())
    {
      fstream file1;
      file1.open("file1.txt",ios::out);
      while(file>>word)
      {
        if(word==s1)
        {
          file1<<s2<<" ";
        }
        else
        {
          file1<<word<<" ";
        }
      }
      rename("file.txt","temp.txt");
      rename("file1.txt","file.txt");
      rename("temp.txt","file1.txt");
      file1.close();
      file.close();
    }
    else
    {
      cout<<"file not opened"<<endl;
    }
  }
}

void cmd::display()
{
  fstream file;
  file.open("file.txt",ios::in);
  if(file.is_open())
  {
    string line;
    while(getline(file,line))
    {
      cout<<line<<"\t";
    }
    cout<<endl;
    file.close();
  }
}

int main(int argc,char *var[])
{
  if(argc==3)
  {
    cmd c1(var[1],var[2]);
    c1.create();
    cout<<"The text in the file before replacing is "<<endl;
    c1.display();
    c1.replace();
    cout<<"The text in the file after replacing is "<<endl;
    c1.display();
  }
  else
  { 
    cout<<"Wrong choice"<<endl;
  }
  return 0;
} 
