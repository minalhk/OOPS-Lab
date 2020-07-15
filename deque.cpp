#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque <int> dq;
	int x,y;
	char c;
	do{
	cout<<"1.enter element from front\n2.enter element fron rear\n3.delete from front\n4.delete from rear\n5.size of dequeue\n6.display queue"<<endl;
	
	cin>>x;
	switch(x){
		case 1:
			cout<<"enter element to push- "<<endl;
			cin>>y;
			dq.push_front(y);
			break;
		case 2:
			cout<<"enter element to push- "<<endl;
			cin>>y;
			dq.push_back(y);
			break;
		case 3:
			if(dq.size()==0)
				cout<<"no elements to pop"<<endl;
			else	
			  	dq.pop_front();
			break;
		case 4:
			if(dq.size()==0)
				cout<<"no elements to pop"<<endl;
			else
				dq.pop_back();
			break;
		case 5:
			cout<<"size= "<<dq.size()<<endl;	
						
		case 6:
			{
			deque <int>::iterator it;
			it=dq.begin();
			while(it!=dq.end()){
				cout<<*it<<"  ";
				it++;
			}
			}
			break;
		default :
			cout<<"enter right choice"<<endl;	
		}
		cout<<"continue?(y/n)-"<<endl;
		cin>>c;
		}while(c=='y');
}
