//prime number using for loop

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int i;
	int count=0;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Prime number"<<endl;
	}
	else
	{
		cout<<"Not prime"<<endl;
	}
}
