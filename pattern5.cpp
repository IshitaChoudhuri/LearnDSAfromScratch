/*
123
456
789
*/


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int j,i=1,t=1;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<t<<"\t";
			j++;
			t++;			
		}
		cout<<"\n";
		i++;
	}
}
