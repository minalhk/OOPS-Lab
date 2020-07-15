#include<iostream>
#define MAX 10
using namespace std;

template <typename t>
class sort{
	
	t arr[MAX];
	t temp;
	int n;	
	public:
	
		void sortlist(){
			
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(arr[i]>arr[j])
					{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					}	
				}
			}
		}
		void accept(){
			cout<<"enter no of elements in the array"<<endl;
			cin>>n;
			cout<<"enter arrey elements"<<endl;
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
			
		}
		void display(){
			cout<<"sorted list is- "<<endl;
			for(int i=0;i<n;i++)
				cout<<arr[i]<<endl;
		}
		
};

int main(){
	cout<<"enter integer list-"<<endl;
	sort<int> s;
	s.accept();
	s.sortlist();
	s.display();
	cout<<"enter float element list"<<endl;
	sort<float> s1;
	s1.accept();
	s1.sortlist();
	s1.display();
	return 0;
}
