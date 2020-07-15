#include<iostream>
using namespace std;
int main()
{
  float a,b;
  char c,s;
 do{
  cout<<"enter first number, operator and second number"<<endl;
  cin>>a>>c>>b;
  switch(c)
  {
    case'+':
      cout<<a<<"+"<<b<<"="<<a+b<<endl;
          break;
    case'-':
      cout<<a<<"-"<<b<<"="<<a-b<<endl;
          break;
    case'*':
      cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;
    case'/':
      if(b==0)
        cout<<"b cant be zero"<<endl;
       else
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
        break;
     default:
        cout<<"enter right choice"<<endl;              
  }
  cout<<"if want to continue enter y else enter n"<<endl;
  cin>>s;
   
 } while(s=='y');
return 0;

}
