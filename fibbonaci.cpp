//fibonacci series

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the range: ";
	cin>>n;
	
	int a=0, b=1;
	int c;
	int i;
	cout<<a<<","<<b;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout<<","<<c;
		a=b;
		b=c;
	}
}
