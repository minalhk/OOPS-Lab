#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void showq(queue<int>q){
	queue <int> temp=q;
	while(!temp.empty()){
		cout<<temp.front()<<endl;
		temp.pop();
	}
}
void shows(stack<int>s){
	stack <int> temp=s;
	while(!temp.empty()){
		cout<<temp.top()<<endl;
		temp.pop();
	}
}
int main(){
	int x,y,val;
	char c;
	queue <int> q;
	stack <int> s;
	do{
	cout<<"1.to insert element\n2.enter to delete element\n3.to display size\n4.display first element\n5.display all elements"<<endl;
	cin>>x;
	switch(x){
		case 1:
		{
			cout<<"enter element to insert"<<endl;
			cin>>y;
			q.push(y);
			s.push(y);
		}
		break;
		case 2:
		{
			if(q.size()==0)
				cout<<"no contents to pop"<<endl;
			else{
				val = q.front();
				q.pop();
				cout<<"Element "<<val<<" deleted from Queue"<<endl;
				 val = s.top();
				s.pop();
				cout<<"Element "<<val<<" deleted from Stack"<<endl;
			}		
		}
		break;
		case 3:
		{
			cout<<"size of queue= "<<q.size()<<endl;
			cout<<"size of stack= "<<s.size()<<endl;
		}
		break;
		case 4:
		{
			cout<<"first element of queue= "<<q.front()<<endl;
			cout<<"top element of stack= "<<s.top()<<endl;
			
		}
		break;
		case 5:
		{
			cout<<"queue-"<<endl;
			showq(q);
			cout<<"\nstack-"<<endl;
			shows(s);
			
		}
		break;
		default :
			cout<<"enter right choice"<<endl;
	}
	cout<<"continue(y/n)?"<<endl;
	cin>>c;
	}while(c=='y');
	return 0;
}
